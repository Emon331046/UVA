
/*
ID: hremon32
PROG:
LANG: C++11
*/
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>

using namespace std;
#define mod 1000000007
#define ll long long
#define llu unsigned long long
#define pii pair<int,int>
#define PI acos(-1.00)
#define pb push_back
#define ppb pop_back
long long inf=9999999999,node,edge;
int update_happen;
long long d[5000];
struct lol
{
    int x;
    int y;
    int w;
};
lol g[5000];
void relaxation()
{
        for(int j=0; j < edge ; j++)
        {
            int u,v,cost;
            u=g[ j].x;
            v=g[ j].y;
            cost=g[ j].w;
            if(d[u]+cost<d[v])
            {
                update_happen=1;
                d[v]=d[u]+cost;
                //par[v]=u;
            }
        }
}
bool bellmenford()
{
    for(int i=0;i<=node;i++)d[i]=inf;

    d[0]=0;
    for(int i=0 ; i<node -1; i++)
    {
        update_happen=0;
        relaxation();
        if(!update_happen)break;
    }

    //now i have to check for cycle

    update_happen=0;
    relaxation();
    if(update_happen)return true;
    else return false;

}
int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("");
    ofstream fout ("");
    int tst,query;
    cin>>tst;
    while(tst--)
    {
        cin>>node;
        cin>>edge;
        for(int j =0; j<edge;j++)
        {
            int a,b;
            int cost;
            cin>>a>>b>>cost;
            g[ j].x=a;
            g[ j].y=b;
            g[ j].w=cost;
        }

        if(bellmenford())cout<<"possible"<<endl;
        else cout<<"not possible"<<endl;
    }
    return 0;
}

