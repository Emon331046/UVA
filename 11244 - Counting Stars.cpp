#include<bits/stdc++.h>
using namespace std;
char st[1000][1000];
bool lvl[101][101];
int dx[]= {0,0,1,-1,1,-1,1,-1}, dy[]= {1,-1,0,0,1,1,-1,-1};
int n,e,cnt;
int sum=0;
bool var=true;
void dfs(int x,int y)
{
   //int row,col;
    int rx,ry;
    st[x][y]=1;
    for(int i=0; i< 8; i++)
    {
         rx=x+dx[i];
         ry=y+dy[i];
         //cout<<rx<<"jfjjf "<<ry<<endl;
         if(st[rx][ry]=='*'&&lvl[rx][ry]==0&&rx>0&&rx<=n&&ry>0&&ry<=e)
         {
             //cout<<"FFGSGG"<<endl;
            lvl[rx][ry]=1;
             cnt++;
             dfs(rx,ry);

         }
    }

}
int main()
{
    //n,e;
    while(cin>>n>>e)
    {
        sum=0;
        if(n==0) break;
        memset(lvl,0,sizeof(lvl));
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=e; j++)
            {
                cin>>st[i][j];
            }
        }
        for(int i=1; i<=n; i++)
        {
             for(int j=1; j<=e; j++){
                if(st[i][j]=='*'&&lvl[i][j]==0)
                    {
                        cnt=1;
                        //cout<<i<<"   dd dd   "<<j<<endl;
                        dfs(i,j);
                        //cout<<cnt<<endl;
                        if(cnt==1)sum++;
                    }
            }
        }


        cout<<sum<<endl;
    }

}

