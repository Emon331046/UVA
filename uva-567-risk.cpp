#include<bits/stdc++.h>
using namespace std;
vector<int>v[30];
int bfs(int start,int goal)
{
    int i,level[30],u;
    for(i=0;i<30;i++)level[i]=555;
    queue<int>q;
    q.push(start);
    level[start]=0;
    while(!q.empty()&&level[goal]>500){
        u=q.front();
        q.pop();
        for(i=0;i<v[u].size();i++){
            if(level[v[u][i]]>500){
                q.push(v[u][i]);
                level[v[u][i]]=level[u]+1;
            }
        }
    }
    return level[goal];
}
int main()
{
    int t,hh=1;
    while(scanf("%d",&t)==1)
    {
        int i,n,j,k;
        for(i=0; i<t; i++)
        {
            scanf("%d",&n);
            v[1].push_back(n);
            v[n].push_back(1);
        }
        for(j=2;j<=19;j++){
            scanf("%d",&t);
            for(k=0;k<t;k++){
                scanf("%d",&n);
            v[j].push_back(n);
            v[n].push_back(j);
            }
        }
        int test;
        scanf("%d",&test);
        int start,goal;
        printf("Test Set #%d\n",hh++);
        while(test--){
            scanf("%d%d",&start,&goal);
            int ans;
            ans=bfs(start,goal);
            printf("%2d to %2d: %d\n",start,goal,ans);
        }
        printf("\n");
        for(i=0;i<30;i++)v[i].clear();
    }
    return 0;
}
