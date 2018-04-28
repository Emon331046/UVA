#include<stdio.h>
int main()
{
    long long f0,f1,test,t=0,n,f2,i;
    scanf("%lld",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%lld",&n);
        if(n==0)f1=0;
        else {
                f2=0;
        f1=2;
        f0=1;
            for(i=2;i<=n;i++){
                f2=f1+f0;
                f0=f1;
                f1=f2;
            }
        }
        printf("Scenario #%lld:\n%lld\n",t,f1);
        printf("\n");
    }
    return 0;
}
