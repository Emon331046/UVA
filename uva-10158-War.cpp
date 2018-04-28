#include<bits/stdc++.h>
using namespace std;
int enmparent[100010],frndparent[100010];
int frndfound(int n)
{
    if(frndparent[n]==n)return n;
    else
    {
        frndparent[n]=frndfound(frndparent[n]);
        return frndfound(frndparent[n]);
    }
}
void frndunn(int n,int m)
{
    int u,v;
    u=frndfound(n);
    v=frndfound(m);
    if(u!=v)
    {
        frndparent[v]=u;
    }
}
int enmfound(int n)
{
    if(enmparent[n]==n)return n;
    else
    {
        enmparent[n]=enmfound(enmparent[n]);
        return enmfound(enmparent[n]);
    }
}
void enmunn(int n,int m)
{
    int u,v;
    u=enmfound(n);
    v=enmfound(m);
    if(u!=v)
    {
        enmparent[v]=u;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        frndparent[i]=i;
        enmparent[i]=-1;
    }
    while(1)
    {
        int a,b,c;
        cin>>c>>a>>b;
        if(c==0)break;
        if(c==1)
        {
           if(enmparent[frndparent[a]]==enmparent[frndparent[b]]&&enmparent[frndparent[a]]!=-1)
            {
                printf("-1\n");

            }
            else
            {
               int v,u;
                u=frndparent[a];
                v=frndparent[b];
                frndunn(u,v);
            }
        }
        else if(c==2)
        {
            if(frndparent[b]==frndparent[a])
            {
                 printf("-1\n");

            }
            else
            {
               int v,u;
                if(enmparent[a]==-1)enmparent[a]=frndparent[a];
                 if(enmparent[b]==-1)enmparent[b]=frndparent[b];
                enmunn(a,b);
            }
        }
        else if(c==3)
        {
            if(frndparent[b]==frndparent[a])printf("1\n");
            else printf("0\n");
        }
        else if(c==4)
        {

            if(frndparent[b]!=frndparent[a]&&enmparent[frndparent[a]]!=-1&&enmparent[frndparent[b]]!=-1)printf("1\n");
            else printf("0\n");
        }
    }
    return 0;
}
