//Program to study string in C
#include<stdio.h>
#include<string.h>
int main()
{
    //fgets(string_name,length_of_string,file_type)->to input a string
    //strlen(string_name)->length of string input without /n
    //strcat(string_name1,string_name2)->string is joined together and putting in string '1'
    //strcspn(string_name,character)->to return the index of finding character
    //strcpy(string_name1,string_name2)->string 2 is copied in string 1
    //strcmp(string_name1,string_name2)->0 for same string, 1 for string 1 greater in value,-1 for string 2 greater in value
    char c[20],d[20];
    fgets(c,20,stdin);
    c[strcspn(c,"\n")]='\0';//strcspn->string character index return
    fgets(d,20,stdin);
    d[strcspn(d,"\n")]='\0';
    printf("%s\n",c);
    printf("%s\n",d);
    int a=strlen(c);
    int b=strlen(d);
    printf("%d\n",a);
    printf("%d\n",b);
    strcat(c,d);
    printf("%s\n",c);
    int f=strlen(c);
    printf("%d\n",f);
    int e=strcmp(c,d);
    printf("%d\n",e);
    strcpy(c,d);
    printf("%s",d);

}