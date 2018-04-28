#include<bits/stdc++.h>
using namespace std;
#define pfc(x) printf("Case %d:\n",x)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d%d",&x,&y)
#define sf3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sf4(x,y,z,m) scanf("%d%d%d%d",&x,&y,&z,&m)
#define pf1(x) printf(" %d",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define pf4(x,y,z,m) printf("%d %d %d %d\n",x,y,z,m)
#define pii pair<long long,long long>
vector<int>g[105];
int col[105],timer=0,root;
int low[105],d[105];
map<string,int>mp;
map<int,string>rp;
set<string>ss;
void artdfs(int u,int p)
{
    col[u]=1;
    low[u]=d[u]=timer++;
    int cnt=0;
    for(int i=0; i<g[u].size(); i++)
    {
        int v=g[u][i];
        if(v==p)continue;
        if(col[v]==0)
        {
            cnt++;
            artdfs(v,u);
            low[u]=min(low[u],low[v]);
            if(low[v]>=d[u]&&u!=root)
            {
                //cout<<rp[u]<<low[u]<<d[u]<<endl;
                ss.insert(rp[u]);
            }
        }
        else if(col[v]==1)low[u]=min(d[v],low[u]);
        if(cnt>1&&u==root)ss.insert(rp[u]);
    }
}
int main()
{
    int n,m,tt=1;
    while(sf1(n)==1)
    {
        if(n==0)break;
        if(tt!=1)printf("\n");
        mp.clear();
        rp.clear();
        ss.clear();
        memset(col,0,sizeof(col));
        int d=1;
        timer=0;
        while(n--)
        {
            char s[10000];
            cin>>s;
            mp[s]=d;
            rp[d]=s;
            g[d].clear();
            d++;
        }
        sf1(m);
        while(m--)
        {
            string s1,s2;
            cin>>s1>>s2;
            int u,v;
            u=mp[s1];
            v=mp[s2];
            //cout<<u<<' '<<v<<endl;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(int i=1; i<d; i++)
        {
            root=i;
            if(col[i]==0)artdfs(i,i);
        }
        //cout<<ss.size()<<endl;
        //priority_queue<string>aa;
        set<string >::iterator it;
        printf("City map #%d: %d camera(s) found\n",tt++,ss.size());
        for(it=ss.begin(); it!=ss.end(); it++)cout<<*it<<endl;
    }
    return 0;
}
