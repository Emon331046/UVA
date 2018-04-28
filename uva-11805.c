//bafana bafana
#include<stdio.h>
int main()
{
    int n,j,test,k,p,t=0;
    scanf("%d",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        scanf("%d%d%d",&n,&k,&p);
        j=p+k;
        j=j%n;
        if(j==0)j=n;
       printf("Case %d: %d\n",t,j);
    }
    return 0;
}
