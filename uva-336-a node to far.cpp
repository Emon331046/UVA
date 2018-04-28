#include<bits/stdc++.h>
using namespace std;
vector<int>v[200];
map< int,int >mymap;
int bfs(int temp,int limit)
{
    int ans=1;
    queue<int>q;
    int level[100];
    for(int i=0; i<100; i++)level[i]=555;
    q.push(temp);
    level[temp]=0;
    while(!q.empty())
    {
        int u;
        u=q.front();
        q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            if(level[v[u][i]]>500)
            {
                level[v[u][i]]=level[u]+1;
                if(level[v[u][i]]<=limit)ans++;
                q.push(v[u][i]);
            }
        }
    }
    return ans;
}
int main()
{
    int test,hh=1;
    while(scanf("%d",&test))
    {
        if(test==0)break;
        int n1,n2,assin=0;
        int edge=test;
        while(test--)
        {
            scanf("%d%d",&n1,&n2);
            int x,y;
            if(mymap.find(n1)==mymap.end())
            {
                mymap[n1]=assin++;
            }
            x=mymap[n1];
            if(mymap.find(n2)==mymap.end())
            {
                mymap[n2]=assin++;
            }
            y=mymap[n2];
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int source,ttl;
        while(scanf("%d%d",&source,&ttl))
        {
            if(source==0&&ttl==0)break;

            int temp,ans,sum;
            if(mymap.find(source)==mymap.end())ans=mymap.size();
            else
            {
                temp=mymap[source];
                sum=bfs(temp,ttl);
                ans=mymap.size()-sum;
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",hh++,ans,source,ttl);
        }
        int i;
        for(i=0; i<200; i++) v[i].clear();
        mymap.clear();
    }
    return 0;
}
