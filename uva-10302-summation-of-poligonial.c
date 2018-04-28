#include<stdio.h>
int main()
{

     unsigned long long n,sum,i;
     while(scanf("%llu",&n)==1){
            sum=0;
        for(i=1;i<=n;i++)sum=sum+(i*i*i);
     printf("%llu\n",sum);
     }
     return 0;
}
