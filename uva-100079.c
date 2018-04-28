#include<stdio.h>
int main()
{
   long long int n,s;
    while(scanf("%lld",&n)==1 && n>=0){
            s=(n*n + n + 2)/2;
            printf("%lld\n",s);}
            return 0;
}


