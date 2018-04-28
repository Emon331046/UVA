#include<stdio.h>
int main()
{
    long long b,n,m,i,r,s,mod,a[1000],c[1000];
    while(scanf("%lld%lld%lld",&b,&n,&m)!=EOF)
    {
        r=b;
        s=1;
        i=0;
        while(n!=0)
        {
            a[i]=n%2;
            n=n/2;
            c[i]=r%m;
            r=c[i]*c[i];
            if(a[i])
            {
                s=s*c[i];
                s=s%m;
            }
            i=i+1;
        }
        mod=s%m;
        printf("%lld\n",mod);
    }
    return 0;
}
