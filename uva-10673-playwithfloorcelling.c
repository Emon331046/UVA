#include<stdio.h>
int celling( unsigned long long x, unsigned long long k)
{
    unsigned long long y;
    double n;
    n=(double)x/k;
    y=x/k;
    if(n>y)return y+1;
    else return y;
    printf("%llu\n",y);
}
int main()
{
    unsigned long long  x,k,n,m,test,t=0,p,q;
    scanf("%llu",&test);
    while(1){
            t=t+1;
        if(t>test)break;
    scanf("%llu%llu",&x,&k);
    n=x/k;
    m=celling(x,k);
    for(p=0,q=k;p<=k;p++,q--){
        if((n*p)+(q*m)==x)break;
    }
    printf("%llu %llu\n",p,q);
    }
    return 0;
}
