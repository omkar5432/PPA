#include<stdio.h>
struct Demo
{
    int no;
    
    float f;
};

int main()
{
    struct Demo Arr[3];
    Arr[0].no=10;
    Arr[0].f=10.10;

    Arr[1].no=20;
    Arr[1].f=20.20;

    Arr[3].no=30;
    Arr[3].f=30.30;
    
    return 0;
}