#include<stdio.h>
int main()
{
    int n,i,j,s;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j =i; j < n ; j++)
        {
            printf(" ");
        }
        for ( s = 0; s < i; s++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}