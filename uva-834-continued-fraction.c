#include<stdio.h>
int main()
{
    long long n,m,temp,i,k,count,b[100];
    while(scanf("%lld%lld",&n,&m)){
        count=0;
        b[0]=n;
        b[1]=m;
        for(i=0;n!=1;i++){
            b[i]=n/m;
            temp=n%m;
            n=m;
            m=temp;
        }
        printf("[%lld;%lld",b[0],b[1]);
        for(k=2;k<i;k++)printf(",%lld",b[k]);
        printf("]\n");
    }
    return 0;
}
