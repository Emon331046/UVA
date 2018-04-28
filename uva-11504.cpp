#include<bits/stdc++.h>
using namespace std;
#define pfc(x) printf("Case %d:\n",x)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d%d",&x,&y)
#define sf3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sf4(x,y,z,m) scanf("%d%d%d%d",&x,&y,&z,&m)
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define pf4(x,y,z,m) printf("%d %d %d %d\n",x,y,z,m)
#define pii pair<long long,long long>
vector<int>g[100005];
stack<int>st;
int col[100005],vis[100005];
void dfs(int u)
{
    col[u]=1;
    for(int i=0; i<g[u].size(); i++)
    {
        int v=g[u][i];
        if(col[v]==1)continue;
        else
        {
            dfs(v);
        }
    }
    st.push(u);
}
void ndfs(int u)
{
    vis[u]=1;
    for(int i=0;i<g[u].size();i++)
    {
        int v=g[u][i];
        if(vis[v]==0)ndfs(v);
    }
}
int main()
{
    int test,tt=1,i;
    sf1(test);
    while(test--)
    {
        int n,m;
        memset(col,0,sizeof(col));
        memset(vis,0,sizeof(vis));
        sf2(n,m);
        while(m--)
        {
            int u,v;
            sf2(u,v);
            g[u].push_back(v);
        }
        int cnt=0;
        for(i=1; i<=n; i++)
        {
            if(col[i]==0)
            {
                dfs(i);
            }
        }
        while(!st.empty())
        {
            if(vis[st.top()]==0)
            {
                cnt++;
                ndfs(st.top());
            }
            st.pop();
        }
        pf1(cnt);
        for(i=0;i<=n;i++)g[i].clear();
    }
    return 0;

}
