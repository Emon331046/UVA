#include<stdio.h>
#include<math.h>
int main()
{
    long long n,m,k,i,j;
    while(scanf("%lld",&n)){
        if(n==0)break;
        m=sqrt(n);
        if(m*m<n)m=m+1;
        k=(m-1)*(m-1)+m;
        if(m%2==1){
            if(n>=k){
                j=m;
                i=(m*m)+1-n;
            }
            else {
                i=m;
                j=n-((m-1)*(m-1));
            }
        }
        else {
            if(n<=k){
                i=n-((m-1)*(m-1));
                j=m;
            }
            else {
                i=m;
                j=(m*m)+1-n;
            }
        }
        printf("%lld %lld\n",i,j);
    }
    return 0;
}
