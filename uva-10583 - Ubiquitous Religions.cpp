#include<bits/stdc++.h>
using namespace std;
int parent[50005],ans;
void makeset(int i)
{
    parent[i]=i;

}
int found(int n)
{
    if(parent[n]==n)return n;
    else
    {
        parent[n]=found(parent[n]);
        return found(parent[n]);
    }
}
void unn(int n,int m)
{
    int u,v;
    u=found(n);
    v=found(m);
    if(u!=v)
    {
        parent[v]=u;
        ans--;
    }
}
int main()
{
    int edge,node,test=1;
    while(cin>>node>>edge)
    {
        ans=node;
        if(node==0&&edge==0)break;
        int i,n,m;
        for(i=1;i<=node;i++)makeset(i);
        while(edge--)
        {
            cin>>n>>m;
            unn(n,m);
        }
        printf("Case %d: %d\n",test++,ans);

    }
    return 0;
}
