#include<stdio.h>
void main()
    {
        int i, a=0,b=1,c=0;
        for(i=1;i<20;i++)
        {
              c=a+b;
            printf("%d\n",a);
            a=b;
            b=c;
          
        }
    }
