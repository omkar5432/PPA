#include<stdio.h>
int main()
{
    int std=0;

    printf("Primary School Portal..\n");

    printf("Enter Your Division.\n");
    scanf("%d",&std);

    if(std==1)
    {
        printf("Your Exam is at 1PM\n");
    }
    else if(std==2)
    {
        printf("Your Exam is at 2PM\n");
    }
    else if(std==3)
    {
        printf("Your Exam is at 3PM\n");
    }
    else if(std==4)
    {
        printf("Your Exam is at 4PM\n");
    }
    else
    {
        printf("Inalid Standard");
    }
    return 0;
}