#include<stdio.h>
#include<math.h>
int main()
{
   long long i,j,x,y,n,m,k;
   while(scanf("%lld",&n)){
    if(n==0)break;
    x=0;
    y=0;
    j=1;
    for(i=2; ;i++){
        for(j=1;j<i;j++){
            m=(i*i*i)-(j*j*j);
            if(n==m){
                x=i;
                y=j;
                break;
            }
        }
        k=(i*i*i)-((i-1)*(i-1)*(i-1));
        if(k>n||m==n)break;
    }
    if(x!=0)printf("%lld %lld\n",x,y);
    else printf("No solution\n");
   }
    return 0;
}
