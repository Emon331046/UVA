#include<stdio.h>
long long cost[]= {0,1,5,10,25,50},amount[10][30001];
long long coin_change(long long n)
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(cost[i]>j)
            {
                amount[i][j]=amount[i-1][j];
            }
            else
            {
                amount[i][j]=amount[i][j-cost[i]]+amount[i-1][j];
            }
        }

    }
    return amount[5][n];
}
int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        int i,j;
        long long  m;
        memset(amount,0,sizeof(amount));
        amount[0][0]=1;
        amount[1][0]=1;
        amount[2][0]=1;
        amount[3][0]=1;
        amount[4][0]=1;
        amount[5][0]=1;
        amount[6][0]=1;
        m=coin_change(n);
        if(m>1)printf("There are %lld ways to produce %lld cents change.\n",m,n);
        else printf("There is only %lld way to produce %lld cents change.\n",m,n);
    }
    return 0;
}

