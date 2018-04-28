#include<bits/stdc++.h>
using namespace std;
#define pii pair< int ,int >
int cell[1000][1000];
int  vis[500][500];
int n,m;
void bfs(int x,int y)
{
    int fx[]={1,0,-1,1,-1, 1, 0,-1};
    int fy[]={1,1, 1,0, 0,-1,-1,-1};

    queue< pii >q;
    int level[200][200];
    q.push(pii(x,y));
    level[x][y]=0;
    vis[x][y]=1;
    while(!q.empty())
    {
        pii top;
        top=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            int tx,ty;
            tx=top.first+fx[i];
            ty=top.second+fy[i];
            if(tx<n&&ty<m&&tx>=0&&ty>=0&&cell[tx][ty]==1&&vis[tx][ty]==-1)
            {
                q.push(pii(tx,ty));
                vis[tx][ty]=1;
                level[tx][ty]=level[top.first][top.second]+1;
            }
        }

    }
}
int main()
{
    int i,j;
    while(1)
        {
    char s[500][500];
    int coun=0;
    cin>>n>>m;
    if(m==0)break;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='@')cell[i][j]=1;
            else cell[i][j]=-1;
            vis[i][j]=-1;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(cell[i][j]==1&&vis[i][j]==-1)
            {
                bfs(i,j);
                coun++;
            }
        }
    }
    cout<<coun<<endl;
}
    return 0;
}
/*
1 1
*
3 5
*@*@*
**@**
*@*@*
1 8
@@****@*
5 5
****@
*@@*@
*@**@
@@@*@
@@**@
0 0
*/
