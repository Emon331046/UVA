#include<stdio.h>
int main()
{
    long long l,g,t=0,test;
    scanf("%lld",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%lld%lld",&g,&l);
        if(l%g==0)printf("%lld %lld\n",g,l);
        else printf("-1\n");
    }
    return 0;
}
