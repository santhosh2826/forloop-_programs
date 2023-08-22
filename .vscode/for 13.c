#include<stdio.h>
void main()
{
    int n,rem,rev=0;
    int temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("it is palindrome");
    }
    else{
        printf("it is not palindrome");
    }
}