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
        cout<<"Inside Hello Costructor\n";
        a=30;
        b=40;
        c=50;
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

class Child : public Hello
{
    public :
        int z;

    Child()
    {
        cout<<"Inside Child costructor\n";
        z=90;
    }

    ~Child()
    {
        cout<<"Inside Child Destructor\n";
        z=90;
    }

    void sun()
    {
        cout<<"Inside the by\n";
    }
};
int main()
{
    
    Child obj;
    cout<<"Size of HEllo :"<<sizeof(obj)<<" Bytes\n";
    cout<<obj.x<<"\n";
    cout<<obj.y<<"\n";
    cout<<obj.a<<"\n";
    cout<<obj.b<<"\n";
    cout<<obj.c<<"\n";


    obj.fun();
    obj.gun();
    

    return 0;
}
