#include<stdio.h>
int main()
{
    int no=0,Ans=0;

    printf("Enter number: \n");
    scanf("%d",&no);

    Ans = no % 2;

    if(Ans == 0)
    {
            printf("Number is even\n");

    }

    else
    {
        printf("Number is odd");
    }
    
    return 0;
}