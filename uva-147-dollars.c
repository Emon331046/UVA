#include<stdio.h>
long long cost[]= {0,5,10,20,50,100,200,500,1000,2000,5000,10000},amount[15][30001];
long long coin_change(long long n)
{
    int i,j;
    for(i=1; i<=12; i++)
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
    return amount[12][n];
}
int main()
{
    double n;
    char s[100];
    while(scanf("%s",s)==1)
    {
        int sum=0;
        if(s[0]=='0'&&s[1]=='.'&&s[2]=='0'&&s[3]=='0')break;
        int l,j,i;
        long long k;
        l=strlen(s);
        for(i=0;i<l;i++)if(s[i]!='.')sum=sum*10+s[i]-'0';
        memset(amount,0,sizeof(amount));
        for(j=0;j<=13;j++)amount[j][0]=1;
        k=coin_change(sum);
        for(i=0;i<(6-l);i++)printf(" ");
        printf("%s%17lld\n",s,k);
    }
    return 0;
}


