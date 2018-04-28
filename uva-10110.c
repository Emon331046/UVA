//light more light
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long n,j;
    double count,i;
    while(scanf("%lld",&n)){
        if(n==0)break;
        count =(double)sqrt(n);
        j=(int)count;
        i=count-j;
        if(i==0)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
