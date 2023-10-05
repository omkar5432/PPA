#include<stdio.h>
int addition(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}

int substraction(int a1,int a2)
{
    int ans=a1-a2;
    return ans;
}

int main()
{
    int a=10,b=20,c=0;

    c=addition(a,b);
    printf("addition id : %d\n",c);
    
    c=substraction(a,b);
    printf("substraction id : %d\n",c);
    return 0;
}