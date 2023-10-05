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

class Hello
{
    public:
    int a,b;

    Hello()
    {
        cout<<"Inside Hello Destructor\n";
        a=30;
        b=40;
    }

    ~Hello()
    {
        cout<<"Inside Hello Destructor\n";
    }

    void gun()
    {
        cout<<"Inside gun of hello\n";
    }
};

class Child : public Hello, public Demo
{
    public:
    int p;

    Child()
    {
        cout<<"Inside costructor\n";
        p=90;
    }

    ~Child()
    {
        cout<<"Inside Destructor\n";
       
    }

    void sun()
    {
        cout<<"Inside the by\n";
    }
};
int main()
{

Child obj;
Hello h;
    cout<<"Size of HEllo :"<<sizeof(obj)<<" Bytes\n";
    cout<<obj.x<<"\n";
    cout<<obj.y<<"\n";
    cout<<obj.a<<"\n";
    cout<<obj.b<<"\n";


    obj.fun();
    obj.gun();
    obj.sun();

}
