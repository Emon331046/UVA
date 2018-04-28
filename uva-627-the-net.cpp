#include<bits/stdc++.h>
using namespace std;
map<int,int>parent;
int bfs(int start,int goal,map<int,vector<int> >mymap)
{
    int level[1000];
    memset(level,0,sizeof(level));
    queue<int>q;
    q.push(start);
    level[start]=1;
    while(!q.empty())
    {
        int top;
        top=q.front();
        q.pop();
        int siz;
        siz=mymap[top].size();
        for(int i=0;i<siz;i++)
        {
            if(level[mymap[top][i]]==0)
            {
                level[mymap[top][i]]=level[top]+1;
                parent[mymap[top][i]]=top;
                q.push(mymap[top][i]);
            }
        }
    }
    return level[goal];
}
void path(int goal,int start)
{
    if(goal==start)return;
    path(parent[goal],start);
    printf(" %d",goal);
}
int main()
{
    int node;
    while(scanf("%d%*c",&node)==1)
    {
        printf("-----\n");
        map<int,vector<int> >mymap;
        while(node--)
        {
            char s[1000];
            gets(s);
            int l;
            l=strlen(s);
            int lead,i,j;
            lead=0;
            for(i=0;i<l;i++)
            {
                if(isdigit(s[i]))
                {
                  lead=lead*10+(s[i]-'0');
                }
                else break;
            }
            int element=0;
            for(j=i+1;j<l;j++)
            {
                if(isdigit(s[j]))
                {
                    element=element*10+(s[j]-'0');
                }
                else
                {
                    mymap[lead].push_back(element);
                    element=0;
                }
                if(j==l-1)mymap[lead].push_back(element);
            }
        }
        int quiry;
        cin>>quiry;
        while(quiry--)
        {
            int start,goal;
            cin>>start>>goal;
            int sum;
            sum=bfs(start,goal,mymap);
            if(sum==0)printf("connection impossible\n");
            else
            {
                printf("%d",start);
                path(goal,start);
                printf("\n");
            }
        }
    }
    return 0;
}
