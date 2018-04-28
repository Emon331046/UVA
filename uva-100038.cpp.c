#include<stdio.h>
int main()
{
    long long s[30],a[30];
    int i,j,n,count,t;
    while(scanf("%d",&n)==1)
    { count=0;
        for(i=0; i<n; i++)scanf("%lld",&a[i]);
        for(i=0; i<n; i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i+1];
                a[i+1]=a[i];
                a[i]=t;
            }
            s[i]=a[i+1]-a[i];
        }
        for(i=1; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {

                if(i==s[j]){count++;
                break;}
            }
        }
        if(count==n)printf("%d Jolly",count);
        else printf("%d Not jolly",count);
    }
    return 0;
}
