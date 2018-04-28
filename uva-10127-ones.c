#include<stdio.h>
int main()
{
    long long n,m,d,i,a[10000];
    while(scanf("%lld",&n)!=EOF){
        m=0;
        d=0;
        for(i=0; ;i++){
                a[i]=1;
            m=(m*10+a[i])%n;
            if(m==0){
                d=i+1;
                break;
            }
        }
        printf("%lld\n",d);
    }
    return 0;
}
