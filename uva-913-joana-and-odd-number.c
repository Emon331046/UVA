#include<stdio.h>
int main()
{
    long long i,m,sum;
    while( scanf("%lld",&m)==1 ){
            sum=m*(m+1)/2;
            sum=sum+(m/2);
            sum=sum-2;
            sum=sum*3;
            printf("%lld\n",sum);
    }
    return 0;
}
