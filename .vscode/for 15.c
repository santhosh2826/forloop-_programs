#include<stdio.h>
#include<string.h>
void main()
{
    int i,k,j;
    char s[50];
    char a[100];
    printf("Enter the string");
    gets(s);
    k=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        continue;
        a[k]=s[i];
        k++;
    }
     for(i=0;i<strlen(s);i++)
     {
        printf("%c",a[i]);
     }

}