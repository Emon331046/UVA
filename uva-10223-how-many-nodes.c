#include<stdio.h>
#include<string.h>
int main()
{
    long long l,m,p,i,test,ans;
    while(scanf("%lld",&test)!=EOF)
    {
        ans=1;
        if(test==0)printf("0\n");
       else {
            for(i=1;i<64;i++){
        ans=ans*2;
        p=ans-1;
        if(test<=p){printf("%lld\n",i);
        break;
        }
       }
       }
    }
    return 0;
}
