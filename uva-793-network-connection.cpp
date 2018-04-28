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
    int test,t=0;
    cin>>test;
    getchar();
    while(test--)
    {
        if(t!=0)printf("\n");
        t=1;
        int node;
        cin>>node;
        getchar();
        for(int i=1;i<=node;i++)
        {
            makeset(i);
        }
        int success=0,unsuccess=0;
        char ch[100];
        while(gets(ch))
        {
           int  l=strlen(ch);
            if(l==0)break;
            int n1=0,n2=0,i,j;
            for(i=2;i<l;i++)
            {
                if(ch[i]!=' ')
                {
                    n1=n1*10+(ch[i]-'0');
                }
                else break;
            }
            for(j=i+1;j<l;j++)
            {
                n2=n2*10+(ch[j]-'0');
            }
            if(ch[0]=='c')
            {
                unn(n1,n2);
            }
            else if(ch[0]=='q')
            {
                int u,v;
                u=found(n1);
                v=found(n2);
                if(u==v)success++;
                else unsuccess++;
            }
        }
        printf("%d,%d\n",success,unsuccess);

    }
    return 0;
}
