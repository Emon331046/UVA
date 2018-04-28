#include<stdio.h>
#include<bits/stdc++.h>
#define bug printf("chq")
int a[1000][1000];
int cost[1000],weight[1000];
int n;
int func(int product,int cap)
{
    int i,j,p,y;
    for(i=1;i<=product;i++){

        for(j=1;j<=cap;j++){
                if(j<weight[i])a[i][j]=a[i-1][j];
        else {
            a[i][j]=a[i-1][j-weight[i]]+cost[i];
            if(a[i][j]<a[i-1][j])a[i][j]=a[i-1][j];
        }
        }
    }
    return a[product][cap];
}

int main()
{
    int p,y,test,i,m,cap;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)scanf("%d%d",&cost[i],&weight[i]);
        scanf("%d",&m);
        int sum=0;
        for(i=1; i<=m; i++)
        {
            scanf("%d",&cap);
            memset(a,0,sizeof(a));
            sum=sum+func(n,cap);

        }
        printf("%d\n",sum);
    }
    return 0;
}
