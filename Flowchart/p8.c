//Program to find fibonacci numbers 
#include<stdio.h>
int main()
{
    int a=0,b=1,fac,n;
    fac=a+b;
    printf("Write the number till to print:-");
    scanf("%d",&n);
    printf("Fibonacci number:- %d %d %d",a,b,fac);
    for (int i = 0; i < n-3; i++)
    {
        a=b;
        b=fac;
        fac=a+b;
        printf(" %d",fac);
    }
    
}