#include<stdio.h>
#include<math.h>
int main()
{
    long long i,a,b,c,l,d,n,m,count;
    while( scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l) ){
        count=0;
        if(a==0 && b==0 && c==0 && d==0 && l==0 )break;
        for(i=0;i<=l;i++){
            m = a*i*i + b*i +c ;
            if(m%d==0)count=count+1;
        }
        printf("%lld\n",count);
    }
    return 0;
}
