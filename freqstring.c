#include<stdio.h>
#include<string.h>
int main()
{
    int freq[52]={0};
    char c[100];
    fgets(c,20,stdin);
    int a =strlen(c);
    char A='a';
    for (int i = 0; i < a; i++)
    {
        A='a';
        for (int j = 0; j <26; j++)
        {
            if (c[i]==A)
        {
            
            freq[j]++;
        }
        A++;
        }
        A='A';
        for (int j = 26; j <52; j++)
        {
            if (c[i]==A)
        {
            
            freq[j]++;
        }
        A++;
        }
        
    }
    int n;
    scanf("%d",&n);
    printf("%d",freq[n]);
    
}