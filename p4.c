//Program to print deformed rectangle fro one side midpoint
#include<stdio.h>
int main()
{
    int n,i,j,s,k;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( s = 1; s <=i; s++)
        {
            printf("%d ",s);
        }
        
        for ( j = 4*n-4*i; j > 0; j--)
        {
            printf(" ");
        }
        
        for ( k = i; k>=1; k--)
        {
            printf("%d ",k);
        }
        
        printf("\n");
    }
    
}