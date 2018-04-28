#include<stdio.h>
int main()
{
    long long test,t=0,n,temp,s;
    scanf("%lld",&test);
    while(test--){
        t=t+1;
        scanf("%lld",&n);
        temp=n;
        while(1){
            s=0;
            while(temp!=0){
                s=(temp%10)*(temp%10)+s;
                temp=temp/10;
            }
            if(s<10)break;
            temp=s;
        }
        if(s==1)printf("Case #%lld: %lld is a Happy number.\n",t,n);
        else printf("Case #%lld: %lld is an Unhappy number.\n",t,n);
    }
    return 0;
}
