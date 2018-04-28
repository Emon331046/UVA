#include<bits/stdc++.h>
using namespace std;
void bfs(int start,int node,vector<int>v[1001])
{
    int level[1001];
    memset(level,-1,sizeof(level));
    queue<int>q;
    q.push(0);
    level[0]=0;
    while(!q.empty())
    {
        int top;
        top=q.front();
        q.pop();
        for(int i=0;i<v[top].size();i++)
        {
            if(level[v[top][i]]==-1)
            {
                level[v[top][i]]=level[top]+1;
                q.push(v[top][i]);
            }

        }
    }
    for(int i=1;i<node;i++)
    {
        printf("%d\n",level[i]);
    }

}
int main()
{
    int test,t=0;
    scanf("%d",&test);
    while(test--)
    {
        vector<int>v[1001];
        int node,edge;
        if(t!=0)printf("\n");
        t=1;
        scanf("%d%d",&node,&edge);
        while(edge--)
        {
            int a1,a2;
            scanf("%d%d",&a1,&a2);
            v[a1].push_back(a2);
            v[a2].push_back(a1);
        }
        bfs(0,node,v);
    }
    return 0;
}
