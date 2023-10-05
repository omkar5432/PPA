#include<stdio.h>

void Fun()
{
   static  int i=10;
    i++;
    printf("Value of i is:%d",i);
}

int mian()
{
    int no=21;

    Fun();
    

    return 0;
}