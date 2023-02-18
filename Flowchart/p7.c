#include<stdio.h>
int main()
{
    int n,i,j,t=0;
    printf("Write the the number till which to print prime number:-");
    scanf("%d",&n);
    printf("The numbers prime till %d are ",n);
    for ( i = 1; i <= n; i++)
    {
        t=0;
        for ( j = 1; j <=n; j++)
        {
            if (i%j==0)
            {
               t++; 
            }
            
        }
        if (t==2)
        {
            printf("%d ",i);
        }
        
    }
    
}