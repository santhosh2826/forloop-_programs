#include<stdio.h>
#include<string.h>
void main()
{
    int i,k=0;
    char s[50];
    printf("Enter the string");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            k++;
        }
    }
    printf("%d",k);
}