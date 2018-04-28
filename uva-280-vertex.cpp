#include<bits/stdc++.h>
using namespace std;
vector<int>v[500];
map<int ,vector<int> >mymap;
void bfs(int start)
{
    int level[1000]= {0};
    queue<int>q;
    q.push(start);
    level[start]=1;
    while(!q.empty())
    {
        int top;
        top=q.front();
        q.pop();
        int siz;
        siz=v[top].size();
        for(int i=0; i<siz; i++)
        {
            if(level[v[top][i]]==0||level[v[top][i]]==1)
            {
                q.push(v[top][i]);
                int temp=v[top][i];
                mymap[start].push_back(temp);
                level[v[top][i]]=level[top]+1;
            }
        }
    }
}
int main()
{
    int n,i,j,m;
    while(cin>>n)
    {
        if(n==0)break;
        while(cin>>i){
            if(i==0)break;
            while(cin>>j)
            {
                if(j==0)break;
                v[i].push_back(j);

            }
        }
        cin>>m;
        int d,jj;
        int a[500];
        while(m--)
        {
            cin>>d;
            bfs(d);
            int s;
            s=mymap[d].size();
            int k;
            for(k=0; k<mymap[d].size(); k++)
            {
                a[k]=mymap[d][k];
            }
            printf("%d",n-s);
            for(int h=1; h<=n; h++)
            {
                for(jj=0; jj<k; jj++)
                {
                    if(a[jj]==h)break;
                }
                if(jj==k)printf(" %d",h);
            }
            printf("\n");
            mymap.clear();
        }
       for(int hh=0;hh<=n;hh++) v[hh].clear();
    }
return 0;
}
