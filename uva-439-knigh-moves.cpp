#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int grid[8][8];
int bfs(int sx,int sy,int gx,int gy)
{
    int level[100][100];
    memset(level,0,sizeof(level));
    int fx[]={1,-1,1,-1,2,2,-2,-2};
    int fy[]={2,2,-2,-2,1,-1,-1,1};
    queue<pii>q;
    q.push(pii(sx,sy));
    level[sx][sy]=1;
    while(!q.empty())
    {
        pii top;
        top=q.front();
        q.pop();
        for(int i=0;i<8;i++){
        int tx,ty;
        tx=top.first+fx[i];
        ty=top.second+fy[i];
        if(tx>=0&&tx<8&&ty>=0&&ty<8&&level[tx][ty]==0){
            level[tx][ty]=level[top.first][top.second]+1;
            q.push(pii(tx,ty));
        }
        }
        if(level[gx][gy]!=0)return level[gx][gy];
    }
    return level[gx][gy];
}
int main()
{
    char c1[10],c2[10];

    while(cin>>c1){
        cin>>c2;
        memset(grid,0,sizeof(grid));
    int sx,sy,gx,gy;
    sx=c1[0]-'a';
    sy=c1[1]-'1';
    gx=c2[0]-'a';
    gy=c2[1]-'1';
    int sum;
    sum=bfs(sx,sy,gx,gy)-1;
    printf("To get from %s to %s takes %d knight moves.\n",c1,c2,sum);
    }
    return 0;
}
