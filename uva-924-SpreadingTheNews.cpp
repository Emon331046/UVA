#include<bits/stdc++.h>
using namespace std;
int node;
void bfs(int start,map<int,vector<int> >mymap)
{
    int level[3000];
    int best[3000];
    memset(level,0,sizeof(level));
    memset(best,0,sizeof(best));
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
            int temp;
            temp=mymap[top][i];
            if(level[temp]==0)
            {
                q.push(temp);
                level[temp]=level[top]+1;
                best[level[top]]++;
            }
        }
    }
    int sum=0,day;
    for(int kk=0;kk<3000;kk++)
    {
        if(best[kk]>sum)
        {
            sum=best[kk];
            day=kk;
        }
    }
    printf("%d %d\n",sum,day);
}
int main()
{
    while(cin>>node)
    {
        map<int,vector<int> >mymap;
        map<int,int>m;
        for(int i=0;i<node;i++)
        {
            int test;
            cin>>test;
            m[i]=test;
            while(test--)
            {
                int edge;
                cin>>edge;
                mymap[i].push_back(edge);
            }
        }
        int quiry;
        cin>>quiry;
        while(quiry--)
        {
            int d,source;
            cin>>source;
            if(mymap[source].size())
            {
                bfs(source,mymap);
            }
            else printf("0\n");
        }
    }
    return 0;
}
