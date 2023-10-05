#include<stdio.h>
int addition(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}
int main()
{
    int a=10,b=20;
    int c=addition(a,b);
    printf("addition id : %d",c);
    return 0;
}