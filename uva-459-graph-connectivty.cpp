#include<bits/stdc++.h>
using namespace std;
int parent[100];
void makeset(int n)
{
    parent[n]=n;
}
int found(int d)
{
    if(parent[d]==d)return d;
    else
    {
        parent[d]=found(parent[d]);
        return found(parent[d]);
    }
}
void unn(int a1,int a2)
{
    int u,v;
    u=found(a1);
    v=found(a2);
    if(u!=v)parent[u]=v;
}
int main()
{
    int test,t=0;
    cin>>test;
    while(test--)
    {
        vector<int>v;
        if(t!=0)printf("\n");
        t=1;
        int i,n,j;
        char ch;
        char c[5];
        cin>>ch;
        n=ch-'A';
        for(i='A'-'A';i<=n;i++)
        {
            makeset(i);
        }
        getchar();
        while(gets(c))
        {
            int l=strlen(c);
            if(l==0)break;
            int a1,a2;
            a1=c[0]-'A';
            a2=c[1]-'A';
            unn(a1,a2);
        }
        for(i=0;i<=n;i++)
        {
            int temp;
            temp=found(i);
            for(j=0;j<v.size();j++)
            {
                if(temp==v[j])break;
            }
            if(j==v.size())v.push_back(temp);
        }
        int ans;
        ans=v.size();
        cout<<ans<<'\n';
    }
    return 0;
}
