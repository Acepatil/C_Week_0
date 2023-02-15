#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for ( i = n; i > 0; i--)
    {
        for ( j =2*i-1; j >0 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
