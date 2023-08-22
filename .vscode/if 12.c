# include<stdio.h>
void main()
    {
        int n,i,s=0;
        int a[10];
        printf("enter the values");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                s++;
            }
        }
        printf("%d",s);
        

    }

