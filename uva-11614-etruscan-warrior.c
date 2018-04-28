#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long m,test,k,t=0;
    double n;
    scanf("%llu",&test);
    while(1){
            t=t+1;
    if(t>test)break;
            scanf("%llu",&m);
            n=(double) (-1+sqrt(1+8*m))/2;
            k=n;
            printf("%llu\n",k);
            }
    return 0;
}
