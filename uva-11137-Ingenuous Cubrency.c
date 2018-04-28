#include<stdio.h>
long long cost[25],a[25][100005];
long long coin_change(long long n)
{
    int i,j;
    for(i=1; i<=21; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(cost[i]>j)a[i][j]=a[i-1][j];
            else
            {
                a[i][j]=a[i-1][j]+a[i][j-cost[i]];
            }
        }
    }
    return a[21][n];
}
int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        memset(a,0,sizeof(a));
        int i;
        for(i=0; i<22; i++)
        {
            a[i][0]=1;
            cost[i]=i*i*i;
        }
        long long sum;
        sum=coin_change(n);
        printf("%lld\n",sum);
    }
    return 0;
}
