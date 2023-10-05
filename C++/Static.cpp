#include<iostream>
using namespace std;

class Demo
{
    public :

    int i;
    int j;

    Demo(int a=10, int b=20)
    {
        i=a;
        j=b;
    }

   /* Demo()
    {

    }  */

    void Display()
    {
        cout<<"Value of i:"<<i<<"\n";
        cout<<"Value of j:"<<j<<"\n";
    }
};


int main()
{
    Demo d1;
    d1.Display();

    Demo d2(11);
    d2.Display();

    Demo d3(51,101);
    d3.Display();

    return 0;
}
// to run this code
// >g++ Static.cpp -o Myexe
// Myexe