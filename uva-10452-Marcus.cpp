#include<bits/stdc++.h>
using namespace std;
char s[]= {'I','E','H','O','V','A','#'};
vector<string>v;
void dfs(int x,int y,char c[100][100],int d)
{
    if(d>=7)
    {
        return ;
    }
    if(y-1>=0&&c[x][y-1]==s[d])
    {
        dfs(x,y-1,c,d+1);
        v.push_back("left");
    }
    if(c[x][y+1]==s[d])
    {
        dfs(x,y+1,c,d+1);
        v.push_back("right");
    }
    if(c[x-1][y]==s[d])
    {
        dfs(x-1,y,c,d+1);
        v.push_back("forth");
    }
}
int main()
{
    int test,t=1;
    cin>>test;
    while(test--)
    {
        int n,m,i,j;
        char c[100][100];
        cin>>m>>n;
        for(i=0; i<m; i++)
        {
            cin>>c[i];
        }
        for(i=0; i<n; i++)
        {
            if(c[m-1][i]=='@')
            {
                dfs(m-1,i,c,0);
                break;
            }
        }
        for(i=v.size()-1;i>=0;i--)
        {
            if(i==v.size()-1)cout<<v[i];
            else cout<<' '<<v[i];
        }
        cout<<endl;
        v.clear();
    }

    return 0;
}
