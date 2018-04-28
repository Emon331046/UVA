#include<stdio.h>
int main()
{
   unsigned long long z,i,m,l,j,k,d=0,test;
    while(scanf("%lld%lld%lld%lld",&z,&i,&m,&l)){
           unsigned long long flag=0,a[10000];
        if(z==0&&i==0&&m==0&&l==0)break;
        for(test=0;test<m;test++){
            a[test]=((z*l)+i)%m;
            l=a[test];
            for(j=0;j<test;j++)if(a[test]==a[j]){
                flag=1;
                break;
            }
            if(flag==1){
                printf("Case %llu: %llu\n",++d,test);
                break;
            }
        }
    }
    return 0;
}
