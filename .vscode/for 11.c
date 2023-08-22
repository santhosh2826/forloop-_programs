# include<stdio.h>
void main()
    {
        int n,i,avg,s=0;
        int a[10];
        printf("enter the values");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            s=s+a[i];
            avg=s/n;
        }
        printf("%d",avg);

    }

