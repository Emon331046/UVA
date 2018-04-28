#include<stdio.h>
int main()
{
    int test,t=0,a[12],n,i,temp,j;
    scanf("%d",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        scanf("%d",&n);
        for(i=0; i<n; i++)scanf("%d",&a[i]);
        printf("Case %d: %d\n",t,a[n/2]);
    }
    return 0;
}
