#include<stdio.h>
int main()
{

/* int array[3]={21,43,54};
int x=0;

x=array[2] + 21 + array[0];
x++;

printf("%d",x);
*/

/* float array[4]={98.3,4.3,51.6,7.6};
int i=0;

printf("%f\n",array[i]);
i++;

printf("%f\n",array[i]);
i++;

printf("%f",array[i]);
*/

int arr[6]={10,20,30};
int no=2;

printf("%d\n",arr);
printf("%d\n",arr+2);
printf("%d\n",(&arr)+1);
printf("%d\n",arr+3);
printf("%d\n",&(arr[3]));
printf("%d\n",arr[4]);
printf("%d\n",&(arr[5]));
printf("%d\n",2[arr]);
    return 0;
}