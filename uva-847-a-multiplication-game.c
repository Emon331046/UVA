#include<stdio.h>
 int main()
 {
     long long count,n;
     while(scanf("%lld",&n)==1){
        count=0;
        long long p=1;
        while(p<n){
            if(count%2==0)p=p*9;
            else p=p*2;
            count++;
        }
        if(count%2==0)printf("Ollie wins.\n");
        else printf("Stan wins.\n");
     }
     return 0;
 }

