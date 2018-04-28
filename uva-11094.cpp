#include<bits/stdc++.h>
using namespace std;
string s[100];
int vis[100][100],coun,n,m;
char ch;
int dfs(int x,int y)
{
    vis[x][y]=1;
    coun++;
    if(x-1>=0&&s[x-1][y]==ch&&vis[x-1][y]==-1)
    {
        dfs(x-1,y);
    }
    if(y-1>=0&&s[x][y-1]==ch&&vis[x][y-1]==-1)
    {
        dfs(x,y-1);
    }
    if(y+1<n&&s[x][y+1]==ch&&vis[x][y+1]==-1)
    {
        dfs(x,y+1);
    }
    if(x+1<m&&s[x+1][y]==ch&&vis[x+1][y]==-1)
    {
        dfs(x+1,y);
    }
    if(y==0&&s[x][n-1]==ch&&vis[x][n-1]==-1)
    {
        dfs(x,n-1);
    }
    if(y==n-1&&s[x][0]==ch&&vis[x][0]==-1)
    {
        dfs(x,0);
    }
    return coun;
}
int main()
{
    int test,a,b,j,i;
    while(scanf("%d%d",&m,&n)==2)
    {
        for(i=0;i<m;i++)cin>>s[i];
        memset(vis,-1,sizeof(vis));
        cin>>a>>b;
        ch=s[a][b];
        int t;
        int temp=0;
        t=dfs(a,b);
        for(i=0;i<m;i++)for(j=0;j<n;j++)
        {
            if(s[i][j]==ch&&vis[i][j]==-1)
            {
                coun=0;
                temp=max(temp,dfs(i,j));
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}
