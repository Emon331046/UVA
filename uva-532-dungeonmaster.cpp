#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define pb push_back
#define Pb pop_back
#define sf1(x) scanf("%d", &x)
#define sf2(x,y) scanf("%d %d", &x, &y)
#define sf3(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pf1(x) printf("%d\n", x)
#define PI acos(-1.00)
#define pii pair<int,int>
#define ppi pair<pii,int>
#define INTMAX 1<<30
#define MOD 1000000007
#define ll long long
#define llu unsigned long long
#define eps .0000001
#define zero 0.0000000000000001
#define floatless(a,b) ( (a-b)<=eps )
#define floatequal(a,b) ( floatless(a,b) && floatless(b,a) )
#define incircle_r(a,b,c) 2*area(triangle)/perimeter(triangle)
#define circumcircle_R(a,b,c) a*b*c/sqrt( (a+b+c)*(a+b-c)*(b+c-a)*(c+a-b) )
#define circumcircle_2R_sinelaw a/sinA
#define triarea(a,b,c) sqrt( (a+b+c)*(b+c-a)*(a-b+c)*(a+b-c) )/9
#define mediantoarea(a,b,c) (4/3)*triarea(a,b,c)
using namespace std;
long long a,b,c,flag;
int sx,sy,sz;
char s[40][40][40];
struct lol
{
    int xx;
    int yy;
    int zz;
};
int bfs(int x,int y,int z)
{
    int vis[40][40][40];
    memset(vis,-1,sizeof(vis));
    int fx[]={0,0,0,0,1,-1};
    int fy[]={0,0,1,-1,0,0};
    int fz[]={1,-1,0,0,0,0};
    queue<lol>q;
    q.push({x,y,z});
    vis[x][y][z]=0;
    while(!q.empty())
    {
        lol top;
        top=q.front();
        q.pop();
        if(s[top.xx][top.yy][top.zz]=='E')
            {
                flag=vis[top.xx][top.yy][top.zz];
                break;
            }
        for(int i=0;i<6;i++)
        {
            int tx,ty,tz;
            tx=top.xx+fx[i];
            ty=top.yy+fy[i];
            tz=top.zz+fz[i];

            if(s[tx][ty][tz]!='#'&&tx>=0&&tx<a&&ty<b&&tz<c&&tz>=0&&ty>=0&&vis[tx][ty][tz]==-1)
            {
                vis[tx][ty][tz]=vis[top.xx][top.yy][top.zz]+1;
                q.push({tx,ty,tz});
            }
        }
    }

    return flag;
}
int main()
{
    int i,j,k;
    while(cin>>a>>b>>c)
    {
        flag=-1;
        if(a==0&&b==0&&c==0)break;
        for(i=0; i<a; i++)for(j=0; j<b; j++)for(k=0; k<c; k++)
                {
                    cin>>s[i][j][k];
                    if(s[i][j][k]=='S')
                    {
                        sx=i;
                        sy=j;
                        sz=k;
                    }

                }
                flag=bfs(sx,sy,sz);
                if(flag==-1)printf("Trapped!\n");
                else printf("Escaped in %d minute(s).\n",flag);

    }
    return 0;
}

/*
4 4 5
#####
#####
##.##
##...
#####
###S#
#.#.#
#....
#####
#####
#.###
####E
#####
#...#
...##
#....
*/
