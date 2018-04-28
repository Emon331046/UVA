#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<stdlib.h>
#include<stack>
#include<math.h>
#include<cstring>
#include<algorithm>
using namespace std;
#define pfc(x) printf("Case %d: ",x)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d%d",&x,&y)
#define sf3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sf4(x,y,z,m) scanf("%d%d%d%d",&x,&y,&z,&m)
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define pf4(x,y,z,m) printf("%d %d %d %d\n",x,y,z,m)
#define pii pair<int,int>
#define pb push_back
int l[500][500];
int mx,sum,n,m;
void func(int i,int t)
{
    if(i==n+1)
    {
        if(mx<sum)mx=sum;
        return ;
    }
    for(int j=1; j<=m; j++)
    {
        if(l[i][j]>=5&&t-j>=0)
        {
            sum+=l[i][j];
            func(i+1,t-j);
            sum-=l[i][j];
        }
    }
}
int main()
{
    int tst,tt=1;
    sf1(tst);
    while(tst--)
    {
        sf2(n,m);
        mx=0;
        sum=0;
        for(int i=1; i<=n; i++)
        {
            sf1(l[i][1]);
            int mxx=l[i][1];
            for(int j=2; j<=m; j++)
            {
                sf1(l[i][j]);
                if(l[i][j]<=mxx)l[i][j]=4;
                else mxx=l[i][j];
            }
        }
        func(1,m);
        double ld=(double)mx/n;
        ld=ld+1e-9;
        if(mx)printf("Maximal possible average mark - %.2lf.\n",ld);
        else printf("Peter, you shouldn't have played billiard that much.\n");
    }
    return 0;
}

