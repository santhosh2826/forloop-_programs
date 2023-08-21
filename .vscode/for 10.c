#include<stdio.h>
void main()
{
    int i,c=0;
    char s[100];
    printf("enter the string");
gets(s);
for(i=0;s[i];i++)
{
    if(s[i] =='a'|s[i]=='A'||s[i] =='e'|s[i]=='E'||s[i] =='i'||s[i]=='I'||s[i]=='O'||s[i]=='o'||s[i] =='u'|s[i]=='U')
    {
        c++;
    }
}
printf("%d",c);

}