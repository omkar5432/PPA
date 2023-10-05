#include<stdio.h>

// do-while Loop
int main()
{
    int no=0;
    int i=1;

    printf("Enter number of times to print message :");
    scanf("%d",&no);
    do
    {
        printf("Jay Ganesh...\n");
        i++;
    }while(i<=no);

    return 0;
}