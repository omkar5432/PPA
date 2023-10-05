#include<stdio.h>

void display()
{
    register int no=10;  
    register int i;      
    register int j=20;

    printf("Value of no : %d\n",no);
    printf("Value of i : %d\n",i);
}

int main()
{
    display();

    
    return 0;
}