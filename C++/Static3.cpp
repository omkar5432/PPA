#include<iostream>
using namespace std;

class Demo
{
    public :

    int i;
    int j;
    static int s;

    Demo(int a=10, int b=20)
    {
        i=a;
        j=b;
    }

    void Display()
    {
        cout<<"Inside non static method display\n";
        cout<<"Value of i:"<<i<<"\n";
        cout<<"Value of j:"<<j<<"\n";
        cout<<"Value of s: "<<s<<"\n";
    }

    static void Fun()
    {
        cout<<"Inside static method Fun\n";
        cout<<"Value of s: "<<s<<"\n";
    }
};

int Demo::s = 111;

int main()
{

    cout<<"Value of s is :"<<Demo::s<<"\n";
    Demo::Fun();

    
    Demo d1(11,21);
    Demo d2(51,101);
    Demo d3(121,151);

    cout<<"Size  of Object is :"<<sizeof(d1)<<"\n";
    d1.Display();
    d2.Display();
    d3.Display();

    return 0;
}
// to run this code
// >g++ Static.cpp -o Myexe
// Myexe