//Program to find whether a number is odd or even
#include<stdio.h>
int main()
{
    int num;
    printf("Write the number:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}