//Program to find the max of two numbers
#include<stdio.h>
int main()
{
    int a,b,max=0;
    printf("Write the two numbers:-");
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>=b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    printf("The Greatest of them is %d",max);
}