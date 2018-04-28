#include<bits/stdc++.h>
using namespace std;
map<char,char>parent;
int  bfs(char start,char goal,map<char,vector<char> >mymap)
{
    int level[200];
    for(int i=0;i<200;i++)level[i]=0;
    queue<char>q;
    q.push(start);
    int temp;
    temp=start;
    level[temp]=1;
    while(!q.empty())
    {
        char top;
        top=q.front();
        int topp=top;
        q.pop();
        int siz;
        siz=mymap[top].size();

        for(int i=0;i<siz;i++)
        {
            char ss;
            ss=mymap[top][i];
            temp=ss;
            if(level[temp]==0){
                q.push(ss);
                parent[ss]=top;
                level[temp]=level[topp]+1;
            }
        }

    }
    return level[goal];

}
void path(char goal,char start,int ans)
{
if(start==goal){printf("%c",goal);
return;}
path(parent[goal],start,ans);
printf("%c",goal);
}
int main()
{
    int test,t=0;
    scanf("%d%*c",&test);
    while(test--)
    {
        if(t!=0)printf("\n");
        t=1;
        map<char,vector<char> >mymap;
        int edge,quiry;
        scanf("%d%d%*c",&edge,&quiry);
        while(edge--)
        {
            string s1,s2;
            cin>>s1>>s2;
            char c1,c2;
            c1=s1[0];
            c2=s2[0];
            mymap[c1].push_back(c2);
            mymap[c2].push_back(c1);

        }
        while(quiry--)
        {
            string s3,s4;
            char start,goal;
            cin>>s3>>s4;
            start=s3[0];
            goal=s4[0];
            int ans;
            ans=bfs(start,goal,mymap)-1;
            path(goal,start,ans);
            printf("\n");
            parent.clear();
        }
    }
    return 0;
}
