#include<stdio.h>
#include<math.h>
int main()
{
    long long m,r[100],n,g,l,i,t;
    double k,j;
    while(scanf("%lld",&m) ){
        if(m<0)break;
        for(i=0; ;i++){
            r[i]=(m%3);

            if(m==0)break;
            m=m/3;
        }
        n=0;
        for(g=i-1;g>=0;g--){
           j=g;
            k=pow(10,j);
            n=(r[g]*k) + n;

        }
printf("%lld\n",n);
    }
    return 0;
}
