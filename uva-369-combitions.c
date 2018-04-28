#include<stdio.h>
int main()
{
    long long n,r,i,sum,t,j,m,s;
    while(scanf("%lld%lld",&n,&r)){
        if(n==0&&r==0)break;
        s=n-r;
        if(s>r){
                t=s;
                m=r;
               }
        else {
                m=s;
                t=r;
        }
        sum=1;
        for(i=(t+1),j=1;i<=n;i++,j++){
            sum=(sum*i)/j;

        }
            printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,sum);
    }
    return 0;
}
