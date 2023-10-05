#include<stdio.h>
// #pragma pack(1)
struct Demo
{
    int no;
    float f;
    int x;
    float d;
};
int main()
{
    struct Demo obj;
    struct Demo obj1;

    obj.no=10;
    obj.f=10.5;
    obj.x=11;
    obj.d=11.5;

    obj1.no= 20;
    obj1.f=20.5;
    obj1.x=30;
    obj1.x=30.5;
    return 0;
}