#include<bits/stdc++.h>
using namespace std;
string s[201];
int vis[250],coun,m,v[201][201];
char ch;
void dfs(int x,int y)
{
    v[x][y]=1;
    if(x-1>=0&&y-1>=0&&s[x-1][y-1]==ch&&v[x-1][y-1]==-1)
    {
        vis[x-1]=1;
        dfs(x-1,y-1);
    }
    if(x-1>=0&&s[x-1][y]==ch&&v[x-1][y]==-1)
    {
        vis[x-1]=1;
        dfs(x-1,y);
    }
    if(y-1>=0&&s[x][y-1]==ch&&v[x][y-1]==-1)
    {
        vis[x]=1;
        dfs(x,y-1);
    }
    if(y+1<m&&s[x][y+1]==ch&&v[x][y+1]==-1)
    {
        vis[x]=1;
        dfs(x,y+1);
    }
    if(x+1<m&&s[x+1][y]==ch&&v[x+1][y]==-1)
    {
        vis[x+1]=1;
        dfs(x+1,y);
    }
    if(x+1<m&&y+1<m&&s[x+1][y+1]==ch&&v[x+1][y+1]==-1)
    {
        vis[x+1]=1;
        dfs(x+1,y+1);
    }
}
int main()
{
    int test=1,j,k,i;
    ch='b';
    while(scanf("%d",&m))
    {
        if(m==0)break;
        int flag=0;
        for(i=0; i<m; i++)cin>>s[i];
        for(i=0; i<m; i++)
        {
            if(s[0][i]==ch)
            {
                memset(vis,-1,sizeof(vis));
                memset(v,-1,sizeof(v));
                dfs(0,i);
                for(k=0; k<m; k++)
                {
                    if(vis[k]!=1)break;
                }
                if(k==m)
                {
                    flag=1;
                }

            }
        }
        if(flag==1)printf("%d b\n",test++);
        else printf("%d w\n",test++);

    }
    return 0;
}

