#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    int j;
    int k;

    Demo(int a=10,int b=20, int c=30)
    {
        cout<<"Value of this is :"<<this<<"\n";
        i=a;
        j=b;
        k=c;
    }

    void Fun(int no1,int no2)
    {
        cout<<"Inside Fun \n";
        cout<<"Value of i: "<<this->i<<"\n";
        cout<<"Value of j: "<<this->j<<"\n";
        cout<<"Value of k: "<<this->k<<"\n";

        cout<<"No1 :"<<no1<<"\n";
        cout<<"No2 :"<<no2<<"\n";
    }

    void Display()
    {
        cout<<"Inside Display"<<"\n";
    }
};
int main()
{
    Demo obj1;
    Demo obj2(11,22,33);

    obj1.Fun(5,6);
    obj2.Fun(7,8);

    cout<<"Address of obj1 is "<<&obj2<<"\n";

    obj1.Display();
    return 0;
}