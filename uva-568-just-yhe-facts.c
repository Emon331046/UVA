#include<stdio.h>
#include<math.h>
int main()
{
    int i,d,r,count,f,temp;
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%5d ",n);
        int a[100000]= {0};
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
        for(i=0; i<=count; i++)
        {
            if(a[i]!=0)
            {
                f=a[i];
                break;
            }
        }

        printf("-> %d\n",f);
    }
    return 0;
}
