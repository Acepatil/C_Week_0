//Program To swap two numbers without using extra variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Write The Two Numbers :-\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The numbers before swapping are:-\nnum1=%d\nnum2=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The numbers after swapping are:-\nnum1=%d\nnum2=%d",a,b);
}