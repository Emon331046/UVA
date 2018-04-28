#include<bits/stdc++.h>
using namespace std;
map<string,int>level;
int bfs(string start,string goal,map<string,vector<string> >mymap)
{
    queue<string>q;
    q.push(start);
    level[start]=0;
    while(!q.empty())
    {
        string top;
        top=q.front();
        q.pop();
        int siz;
        siz=mymap[top].size();
        for(int i=0;i<siz;i++)
        {
            string ss;
            ss=mymap[top][i];
            if(level[ss]==-1)
            {
                q.push(ss);
                level[ss]=level[top]+1;
            }
        }
    }
    return level[goal];
}
int main()
{
    int test,t=1;
    cin>>test;
    printf("SHIPPING ROUTES OUTPUT\n\n");
    while(test--)
    {
        if(t!=1)printf("\n");
        printf("DATA SET %2d\n\n",t++);
        vector<string>v;
        map<string,vector<string> >mymap;
        int node,edge,quiry;
        cin>>node>>edge>>quiry;
        while(node--)
        {
            string n1;
            cin>>n1;
            v.push_back(n1);
        }
        while(edge--)
        {
            string s1,s2;
            cin>>s1>>s2;
            mymap[s1].push_back(s2);
            mymap[s2].push_back(s1);
        }
        while(quiry--)
        {
            string start,goal;
            int money;
            cin>>money>>start>>goal;
            for(int i=0;i<v.size();i++)level[v[i]]=-1;
            int sum;
            sum=bfs(start,goal,mymap);
            if(sum==-1)printf("NO SHIPMENT POSSIBLE\n");
            else
            {
                sum=sum*100*money;
                printf("$%d\n",sum);
            }
        }
    }
    printf("\nEND OF OUTPUT\n");
    return 0;
}
