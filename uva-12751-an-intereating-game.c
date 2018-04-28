#include<stdio.h>
int main()
{
    int n,k,x,a,b,sum,test,t=0;
    scanf("%d",&test);
    while(1){
            t=t+1;
    if(t>test)break;
        scanf("%d%d%d",&n,&k,&x);
        n=n*(n+1)/2;
        a=(x-1)*x/2;
        b=(k+x-1)*(k+x)/2;
        sum=n+a-b;
        printf("Case %d: %d\n",t,sum);
    }
    return 0;
}
