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
vector<int>g[2005],f[2005];
int vis[2005],col[2005];
stack<int>st;
void dfs(int u)
{
    col[u]=1;
    for(int i=0; i<g[u].size(); i++)
    {
        int v;
        v=g[u][i];
        if(col[v]==0)
        {
           dfs(v);
        }
    }
    st.push(u);
}
void dfs2(int u)
{
    vis[u]=1;
    for(int i=0; i<f[u].size(); i++)
    {
        int v=f[u][i];
        if(vis[v]==0)
        {
            dfs2(v);
        }
    }
}
int main()
{
    int n,m;
    while(sf2(n,m))
    {
        if(n==0&&m==0)break;
        memset(vis,0,sizeof(vis));
        memset(col,0,sizeof(col));
        while(m--)
        {
            int a,b,c;
            sf3(a,b,c);
            if(c==1)
            {
                g[a].pb(b);
                f[b].pb(a);
            }
            else if(c==2)
            {
                g[a].pb(b);
                g[b].pb(a);
                f[b].pb(a);
                f[a].pb(b);
            }
        }
        dfs(1);
        for(int i=1; i<=n; i++)
        {
            if(col[i]==0)
            {
                dfs(i);
            }
        }
        dfs2(st.top());
        int flag=0;
        for(int i=1; i<=n; i++)
        {

            if(vis[i]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag)printf("0\n");
        else printf("1\n");
        for(int i=0; i<=n; i++)
        {
            g[i].clear();
            f[i].clear();
        }
        while(!st.empty())st.pop();

    }
    return 0;
}
