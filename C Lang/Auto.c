#include<stdio.h>

void display()
{
    int no=10;  // auto int no=10;
    int i;      // auto int i;
    auto int j=20;

    printf("Value of no : %d\n",no);
    printf("Value of i : %d\n",i);
}

int main()
{
    display();

 //   printf("%d",no);       // out of scope
    return 0;
}