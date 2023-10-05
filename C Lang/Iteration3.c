#include<stdio.h>

// While Loop
int main()
{
    int no=0;
    int i=1;

    printf("Enter number of times to print message :");
    scanf("%d",&no);

    while(i<=no)
    {
        printf("Jay Ganesh...\n");
        i++;
    }
    return 0;
}