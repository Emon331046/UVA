#include<bits/stdc++.h>
using namespace std;
//0 white
//1 grey
//2 black
int coun=0;
vector< int >v[10001];
int colour[10001];
void dfs(int x)
{
    int u;
    u=x;
    coun++;
    colour[x]=1;
    for(int i=0; i<v[u].size(); i++)
    {
        if(colour[v[u][i]]==0)
        {
            int f;
            f=v[u][i];
            dfs(f);
        }
    }
    colour[u]=2;
    return ;
}
int main()
{
    int test,t=1;
    cin>>test;
    while(test--)
    {
        int n,m,l;
        cin>>n>>m>>l;
        coun=0;
        for(int i=0; i<m; i++)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
        }
        for(int i=0; i<l; i++)
        {
            int d;
            cin>>d;
            if(colour[d]==0)dfs(d);
        }
        cout<<coun<<endl;
        for(int i=0; i<=n; i++)
        {
            colour[i]=0;
            v[i].clear();
        }
    }
    return 0;
}

