#include<stdio.h>
int main()
{
    int n,i,j,s,c;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        c=1;
        for ( j = i; j <= n; j++)
        {
            printf(" ");   
        }
        for ( s = 1; s <= i; s++)
        {
            printf("%d ",c);
            c=c*(i-s)/s;
        }
        printf("\n");
    }
    
}