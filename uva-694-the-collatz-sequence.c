#include<stdio.h>
int main()
{
    long long a,count,b,t=0,l;
    while(scanf("%lld%lld",&a,&l)==2)
    {
        t=t+1;
        if(a<0&&l<0)break;
        count=1;
        b=a;
        while(b!=1)
        {

            if(b%2==0)
            {
                b=b/2;

            }
            else
            {
                b=(b*3)+1;
            }
            if(b>l)break;
            count=count+1;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,a,l,count);
    }
    return 0;
}
