#include<stdio.h>
int main()
{
    unsigned long long s,f0,f1,n;
    int i;
    while(scanf("%llu",&n)){
        if(n==0)break;
        f0=1;
        f1=1;
        if(n>1){
                s=0;
            for(i=2;i<=n;i++){
                s=f1+f0;
                f0=f1;
                f1=s;
            }
           printf("%llu\n",s);
        }
        else  printf("%llu\n",f1);
    }
    return 0;
}
