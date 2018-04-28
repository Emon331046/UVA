#include<bits/stdc++.h>
using namespace std;
#define bug printf("chq ")
int prime(long long n)
{
    long long i;
    if(n==1)return 0;
    if(n==2)return 1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    long long i,j,m;
    while(scanf("%lld",&m)==1)
    {
        if(m==0)break;
        if(m<0)m=-m;
        long long ans=-1,n;
        n=m;
        i=2;
        if(prime(m)||m==1)ans=-1;
        else
        {
        int temp,flag=0;
        while(n!=1)
        {
            if(n%i==0)
            {
                n=n/i;
                if(flag==0)
                {
                    temp=i;
                    flag=1;
                }
                if(prime(n)&&temp!=n)
                {
                    ans=n;
                    break;
                }
                i--;
            }
            i++;
        }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
