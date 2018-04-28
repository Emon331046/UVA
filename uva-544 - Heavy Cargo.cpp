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
#define pii pair<int,int>
#define pb push_back
int n,m,par[20005],vis[20005];
vector<pii>g[20005];
int start,goal,ans;
struct lol
{
    int uu;
    int vv;
    int w;
} ss[20005];
class comp
{
public:
    bool operator()(lol a,lol b)
    {
        return a.w>b.w;
    }
};
void makeset()
{
    for(int i=1; i<=n; i++)par[i]=i;
}
int found(int nn)
{
    if(par[nn]==nn)return nn;
    else
    {
        par[nn]=found(par[nn]);
        return par[nn];
    }
}
void mst( )
{
    int cnt=0,flag=0;
    for(int i=0; i<m; i++)
    {
        int aa,bb;
        aa=found(ss[i].uu);
        bb=found(ss[i].vv);
        if(aa!=bb)
        {
            par[bb]=aa;
            g[ss[i].uu].pb(pii(ss[i].vv,ss[i].w));
            g[ss[i].vv].pb(pii(ss[i].uu,ss[i].w));
            cnt++;
            if(cnt==n-1)break;
        }
    }
    return ;
}
void dfs(int u)
{
    vis[u]=1;
    for(int i=0;i<g[u].size();i++)
    {
        if(!vis[g[u][i].first])
        {
            if(ans>g[u][i].second&&vis[goal]==0)ans=g[u][i].second;
            dfs(g[u][i].first);
        }
    }
}
map<string,int>mp;
int main()
{
    int t=1;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)break;
        string a,b;
        int d=0;
        ans=99999999;
        memset(vis,0,sizeof(vis));
        for(int i=0; i<m; i++)
        {
            cin>>a>>b>>ss[i].w;
            if(!mp[a])
            {
                d++;
                mp[a]=d;
            }
            if(!mp[b])
            {
                d++;
                mp[b]=d;
            }
            ss[i].uu=mp[a];
            ss[i].vv=mp[b];
        }
        cin>>a>>b;
        start=mp[a];
        goal=mp[b];
        sort(ss,ss+m,comp());
        makeset();
        mst();
        dfs(start);
        printf("Scenario #%d\n",t++);
        printf("%d tons\n\n",ans);
        mp.clear();
        for(int i=0;i<=n;i++)g[i].clear();
    }
    return 0;
}

