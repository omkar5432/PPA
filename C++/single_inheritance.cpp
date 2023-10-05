#include<iostream>
using namespace std;
class Demo
{
    public:
        int x,y;

        Demo()
        {
            cout<<"Indside Demo constructor\n";
            x=10;
            y=20;
        }

        ~Demo()
        {
            cout<<"Inside Demo Destructor\n";
        }

        void fun()
        {
            cout<<"Inside fun of Demo\n";
        }
};

class Hello : public Demo
{
    public:
    int a,b,c;

    Hello()
    {
        cout<<"Inside Hello Destructor\n";
        a=30;
        b=40;
        c=50;
    }

    void gun()
    {
        cout<<"Inside gun of hello\n";
    }
};
int main()
{

    Hello h;
    cout<<"Size of HEllo :"<<sizeof(h)<<" Bytes\n";
    cout<<h.x<<"\n";
    cout<<h.y<<"\n";
    cout<<h.a<<"\n";
    cout<<h.b<<"\n";
    cout<<h.c<<"\n";


    h.fun();
    h.gun();
    return 0;
}
