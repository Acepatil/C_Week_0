//Program to find whether a num is prime or not
#include<stdio.h>
int main()
{
    int n,i,t=0;
    printf("Write the number to check:-");
    scanf("%d",&n);
    for ( i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            t++;
        }
    }
    if (t>=1)
    {
        printf("The number is not prime");
    }
    else
    {
        printf("The number is prime");
    }
}