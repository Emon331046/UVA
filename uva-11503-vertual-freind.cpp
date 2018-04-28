#include<bits/stdc++.h>
using namespace std;
int parent[200000];
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
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int edge;
        cin>>edge;
        map<string,int >mymap;
        int d=0,u,v;
        int coun[100000];
        for(int i=0;i<100000;i++)coun[i]=1;
        while(edge--)
        {
            string c1,c2;
            cin>>c1>>c2;
            if(mymap.find(c1)==mymap.end())
            {
                mymap[c1]=d;
                makeset(d);
                d++;

            }
            if(mymap.find(c2)==mymap.end())
            {
                mymap[c2]=d;
                makeset(d);
                d++;
            }
            u=mymap[c1];
            u=found(u);
            v=mymap[c2];
            v=found(v);
           if(u!=v)
            {
                unn(u,v);
                coun[u]=coun[u]+coun[v];
            }
            printf("%d\n",coun[u]);
        }
    }
    return 0;
}
