#include<bits/stdc++.h>
using namespace std;
#define pfc(x) printf("Case %d: ",x)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d%d",&x,&y)
#define sf3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sf4(x,y,z,m) scanf("%d%d%d%d",&x,&y,&z,&m)
#define pii pair<int,int>
#define inf 2147483641
vector<pii>g[20001];
int n,m,s,t,d[20001];
void dijkstra(int source)
{
    for(int i=0;i<=n;i++)d[i]=214748364;
    priority_queue< pii , vector<pii> , greater<pii> >q;
    q.push(pii(0,source));
    d[source]=0;
    while(!q.empty())
    {
        int u,c;
        u=q.top().second;
        c=q.top().first;
        q.pop();
        if(d[u]<c)continue;
        for(int i=0;i<g[u].size();i++)
        {
            int w,v;
            w=g[u][i].first;
            v=g[u][i].second;
            if(d[v]>d[u]+w)
            {
                d[v]=d[u]+w;
                q.push(pii(d[v],v));
            }
        }
    }
}
int main()
{
    int test,u,v,w,tt=1;
    sf1(test);
    while(test--)
    {
        sf4(n,m,s,t);
        for(int i=0;i<m;i++)
        {
            sf3(u,v,w);
            g[u].push_back(pii(w,v));
            g[v].push_back(pii(w,u));
        }
        dijkstra(s);
        pfc(tt++);
        if(d[t]!=214748364)printf("%d\n",d[t]);
        else printf("unreachable\n");
        for(int i=0;i<n;i++)g[i].clear();
    }
    return 0;
}
