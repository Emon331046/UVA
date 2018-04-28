#include<stdio.h>
#include<math.h>
int main()
{
    double i,n,ans,j;
    int k,t=0;
    while(1)
    {
        t=t+1;
        scanf("%lf",&n);
        if(n==0)break;
        j=3+sqrt(8*n+9);
        j=j/2;
         k=(int)j;
         if(k==j) printf("Case %d: %d\n",t,k);
        else printf("Case %d: %d\n",t,k+1);
    }
    return 0;
}
