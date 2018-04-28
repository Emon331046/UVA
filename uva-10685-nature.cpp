#include<bits/stdc++.h>
using namespace std;
int parent[6000];
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
    u=found(parent[n]);
    v=found(parent[m]);
    if(u!=v)
    {
        parent[v]=u;
    }
}
int main()
{
    int node,edge;
    while(scanf("%d%*c%d",&node,&edge)==2)
    {
        if(node==0&&edge==0)break;
        map<string,int>mymap;
        int temp;
        temp=node;
        getchar();
        while(node--)
        {
            char s[100];
            gets(s);
            mymap[s]=node;
            makeset(node);
        }
        while(edge--)
        {
            char c1[100],c2[100];
            cin>>c1>>c2;
            int n,m;
            n=mymap[c1];
            m=mymap[c2];
            unn(n,m);
        }
        int coun[6000];
        memset(coun,0,sizeof(coun));
        for(int i=0;i<temp;i++)
        {
            int tt;
            tt=found(i);
            coun[tt]++;
        }
        sort(coun,coun+6000);
        printf("%d\n",coun[6000-1]);
    }
    return 0;
}
