#include<stdio.h>
int main()
{
    int i,d,r,count,f,temp,n;
    while(scanf("%d",&n)==1)
    {
        int a[10000]= {0};
        a[0]=1;
        count=1;
        for(i=1; i<=n; i++)
        {
            d=0;
            r=0;
            while(1)
            {
                temp=a[d];
                a[d]=(r+temp*i)%10;
                r=(r+temp*i)/10;
                d=d+1;
                if(count==d)break;
            }
            while(r!=0)
            {
                a[d]=r%10;
                r=r/10;
                d=d+1;
            }
            if(count<d)count=d;
        }
        f=0;
        printf("%d!\n",n);
        for(i=count; i>=0; i--)
        {
            if(a[i]!=0||f==1)
            {
                printf("%d",a[i]);
                f=1;
            }
        }
        printf("\n");
    }
    return 0;
}
