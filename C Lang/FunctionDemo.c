#include<stdio.h>
int Addition(int x,int y)
{
    int Ans=0;
    Ans=x+y;
    return Ans;
}
int main()
{
    int a=0,b=0,c=0;
    printf("Enter a: \n");
    scanf("%d",&a);
    printf("Enter b: \n");
    scanf("%d",&b);
    c=Addition(a,b);
    printf("Addition is: %d\n",c);
    return 0;
}