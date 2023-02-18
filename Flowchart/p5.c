//Program to find the sum of n numbers
#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Write the numbers of elemets to add\n");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    printf("The sum of n elements is %d",sum);
    
}