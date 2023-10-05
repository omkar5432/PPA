#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;

    // Comparator for sorting points by their x-coordinate.
    bool operator<(const Point& other) const {
        return x < other.x || (x == other.x && y < other.y);
    }
};

// Cross product of vectors OA and OB (i.e., OA x OB).
int crossProduct(const Point& O, const Point& A, const Point& B) {
    return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

// Returns a vector of points on the convex hull in counter-clockwise order.
std::vector<Point> convexHull(std::vector<Point>& points) {
    int n = points.size();
    if (n <= 3) {
        // All points are on the convex hull.
        return points;
    }

    // Sort points lexicographically.
    std::sort(points.begin(), points.end());

    // Initialize lower and upper hulls.
    std::vector<Point> lowerHull, upperHull;

    // Build lower hull.
    for (int i = 0; i < n; ++i) {
        while (lowerHull.size() >= 2 &&
               crossProduct(lowerHull[lowerHull.size() - 2], lowerHull[lowerHull.size() - 1], points[i]) <= 0) {
            lowerHull.pop_back();
        }
        lowerHull.push_back(points[i]);
    }

    // Build upper hull.
    for (int i = n - 1; i >= 0; --i) {
        while (upperHull.size() >= 2 &&
               crossProduct(upperHull[upperHull.size() - 2], upperHull[upperHull.size() - 1], points[i]) <= 0) {
            upperHull.pop_back();
        }
        upperHull.push_back(points[i]);
    }

    // Remove duplicates between lower and upper hulls.
    lowerHull.pop_back();
    upperHull.pop_back();

    // Concatenate upper and lower hulls to form the convex hull.
    lowerHull.insert(lowerHull.end(), upperHull.begin(), upperHull.end());

    return lowerHull;
}

// Calculate the area of a convex polygon.
double calculateArea(const std::vector<Point>& polygon) {
    int n = polygon.size();
    double area = 0.0;
    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;
        area += static_cast<double>(polygon[i].x * polygon[j].y - polygon[j].x * polygon[i].y);
    }
    return std::abs(area) / 2.0;
}

int main() {
    std::vector<Point> points = {{1, 2}, {2, 2}, {4, 5}, {3, 3}, {6, 8}};

    std::vector<Point> convexHullPoints = convexHull(points);
    double largestArea = calculateArea(convexHullPoints);

    std::cout << "Largest area of the convex hull: " << largestArea << std::endl;

    return 0;
}
