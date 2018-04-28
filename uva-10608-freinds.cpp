#include<bits/stdc++.h>
using namespace std;
int parent[100000];
void makeset(int n)
{
    parent[n]=n;
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
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int node,edge,i,j;
        cin>>node>>edge;
        for(i=1;i<=node;i++)
        {
            makeset(i);
        }
        while(edge--)
        {
            int n1,n2;
            cin>>n1>>n2;
            unn(n1,n2);
        }
        int coun[100000]={0};
        for(i=1;i<=node;i++)
        {
            int temp;
            temp=found(i);
            coun[temp]++;
        }
        sort(coun,coun+(node+1));
        printf("%d\n",coun[node]);
    }
    return 0;
}
