#include<bits/stdc++.h>
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
#define pii pair<long long,long long>
#define pb push_back
class comp
{
public:
    bool operator()(pii a,pii b)
    {
        if(a.second==b.second)return a.first>b.first;
        return a.second<b.second;
    }
};
vector<int>g[10000];
int  cnt[10000],low[10000],d[10000],col[10000],root,tim;
set<int>s;
void adfs(int u,int p)
{
    low[u]=d[u]=tim++;
    col[u]=1;
    int coun=0;
    for(int i=0; i<g[u].size(); i++)
    {
        int v=g[u][i];
        if(v==p)
            continue;
        if(col[v]==0)
        {
            coun++;
            adfs(v,u);
            low[u]=min(low[u],low[v]);
            if(low[v]>=d[u]&&u!=root)
            {
                s.insert(u);
                cnt[u]++;
            }
        }
        else if(col[v]==1)
        {
            low[u]=min(low[u],d[v]);
        }
    }
    if(u==root&&coun>1)
    {
        s.insert(u);
        cnt[root]=coun;
    }
}
int  main()
{
    int n,m;
    while(sf2(n,m)==2)
    {
        if(n==0&&m==0)break;
        int a,b;
        root=0;
        tim=0;
        memset(col,0,sizeof(col));
        memset(d,0,sizeof(d));
        while(sf2(a,b))
        {
            if(a==-1&&b==-1)break;
            g[a].pb(b);
            g[b].pb(a);
        }
        for(int i=0; i<n; i++)
            if(g[i].size()>=1)
            {
                cnt[i]=1;
            }
        adfs(0,0);
        priority_queue<pii,vector<pii>,comp>q;
        for(int i=0; i<n; i++)
        {
            q.push(pii(i,cnt[i]));
        }
        while(m--)
        {
            printf("%lld %lld\n",q.top().first,q.top().second);
            q.pop();
        }
        for(int i=0;i<=n;i++)g[i].clear();
        printf("\n");
    }
    return 0;

}
