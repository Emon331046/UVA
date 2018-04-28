#include<stdio.h>
int main()
{
    long long p;
    while(scanf("%lld",&p)==1){
        long long sum=0;
        if(p>1){
            while(p!=1){
                                        sum=sum+(p/2);
                if(p%2==1){
                    p=(p/2)+1;
                }
                else {
                    p=p/2;
                }
            }
        }
        else sum=0;
        printf("%lld\n",sum);
    }
    return 0;
}
