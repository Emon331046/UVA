#include<stdio.h>
int main()
{
    int n,m,c,test,count=0;
    while(scanf("%d%d%d",&n,&m,&c))
    {
        if(n==0&&m==0&&c==0)break;
        int a[1000],best=0,i,sum=0,flag=0;
        int d[1000]= {0};
        for(i=0; i<n; i++)scanf("%d",&a[i]);
        for(i=0; i<m; i++)
        {
            scanf("%d",&test);
            if(d[test-1]==0)
            {
                sum=sum+a[test-1];
                d[test-1]=1;
            }
            else
            {
                sum=sum-a[test-1];
                d[test-1]=0;
            }
            if(sum>c)
            {
                flag=1;
            }
            if(best<sum)best=sum;
        }
        if(flag==0)
        {
            printf("Sequence %d\n",++count);
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n",best);
        }
        else
        {
            printf("Sequence %d\n",++count);
            printf("Fuse was blown.\n\n");
        }
    }
    return 0;
}
