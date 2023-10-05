#include<iostream>
using namespace std;
class Demo
{
    public:
        int i;
        int j;
        
        void fun()
        {
            
            cout<<"Inside fun of Demo class\n";
        }
};

int main()
{
    
    Demo d1;
    Demo d2;

    d1.i=11;
    d2.j=21;

    d1.fun();
    d2.fun();
    return 0;
}