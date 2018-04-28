#include<bits/stdc++.h>
using namespace std;
struct lol
{
    int u;
    int v;
} ss[10000];
class comp
{
public:
    bool operator()(lol a,lol b)
    {
        if(a.v==b.v)return a.u<b.u;
        return a.v>b.v;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    int n,m,i,tt=1;
    while(cin>>n)
    {
        if(n==0)break;
        for(i=0; i<n; i++)
        {
            int nn,mm;
            cin>>nn>>mm;
            ss[i].u=nn;
            ss[i].v=mm;
        }
        sort(ss,ss+n,comp());
        int ans=0,mx=0;
        for(i=0; i<n; i++)
        {
            int tmp=ans+ss[i].u+ss[i].v;
            if(tmp>mx)
            {
                mx=tmp;
            }
            ans+=ss[i].u;
        }
        cout<<"Case "<<tt++<<": ";
        cout<<mx<<endl;
    }
    return 0;
}

