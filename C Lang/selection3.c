#include<stdio.h>
int main()
{
    int std=0;

    printf("Primary School Portal..\n");

    printf("Enter Your Division.\n");
    scanf("%d",&std);

    switch(std)
    {
        case 1:
        printf("Your Exam is at 1 pm\n");
        break;
        case 2:
        printf("Your Exam is at 2 pm\n");
        break;
        case 3:
        printf("Your Exam is at 3 pm\n");
        break;
        case 4:
        printf("Your Exam is at 4 pm\n");
        break;
        default:
        printf("Inalid Standard");
    }
    return 0;
}
// The above application is consider as switch case