#include<stdio.h>
#include<string.h>
void main()
{
    int i;
char s[10];
 printf("Enter the string");
    gets(s);
    for (i=strlen(s);i>=0;i--)
    {
        printf("%c",s[i]);
    }
}   