#include<stdio.h>
struct id
{
    long long a;
    long long c;
};
int main()
{
    long long n,d=0,flag,i,j;
    struct id count[10000];
    for(i=0; i<10000; i++)count[i].c=0;
    while(scanf("%lld%*c",&n)!=EOF)
    {
        flag=0;
        for(j=0; j<d; j++)
        {
            if(count[j].a==n)
            {
                count[j].c=count[j].c+1;
                flag=1;
            }
        }
        if(flag==0)
        {
            count[d].a=n;
            count[d].c=1;
            d++;
        }
    }
    for(i=0;i<d;i++)printf("%lld %lld\n",count[i].a,count[i].c);
    return 0;
}

