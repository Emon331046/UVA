#include<stdio.h>
int main()
{
    long long s,n;
    while(scanf("%lld",&n)){
        if(n<0)break;
        s=0;
        if(n>1){
                s=n*25;
            }
     printf("%lld%%\n",s);
    }
    return 0;
}
