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
            string temp;
            temp=mymap[top][i];
            if(level[temp]==-1)
            {
                level[temp]=level[top]+1;
                q.push(temp);
            }
        }
    }
    return level[goal];
}
int main()
{
    int test,t=0;
    cin>>test;
    while(test--)
    {
        if(t!=0)printf("\n");
        t=1;
        vector<string>store[20],v;
        map<string,vector<string> >mymap;
        string s;
       while(cin>>s)
        {
            int l;
            l=s.length();
            if(l==1&&s[0]=='*')break;
            int siz;
            siz=store[l].size();
            for(int i=0;i<siz;i++)
            {
                string temp;
                temp=store[l][i];
                int coun=0;
                for(int j=0;j<l;j++)
                {
                    if(temp[j]!=s[j])coun++;
                    if(coun==2)break;
                }
                if(coun==1)
                {
                    mymap[temp].push_back(s);
                    mymap[s].push_back(temp);
                }
            }
            store[l].push_back(s);
            v.push_back(s);
        }

            string sd;
            getchar();
        while(getline(cin,sd))
        {
            int ls=sd.length();
            if(ls==0)break;
            stringstream ss(sd);
            string start,goal;
            ss>>start>>goal;
            for(int i=0;i<v.size();i++)
            {
                level[v[i]]=-1;
            }
            int sum;
            sum=bfs(start,goal,mymap);
            cout<<start<<" "<<goal<<" "<<sum<<'\n';
        }
    }
    return 0;
}

