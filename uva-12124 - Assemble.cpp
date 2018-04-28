#include<bits/stdc++.h>
using namespace std;
struct lol
{
    int tk;
    int ql;
};
int cost,num;
vector<lol>v[10000];
class comp
{
public:
    bool operator()(lol a,lol b)
    {
        if(a.tk==b.tk)return a.ql>b.ql;
        return a.tk<b.tk;
    }
};
int func(int top)
{
    int sum=0,mn,i;
    for(int j=1; j<num; j++)
    {
        mn=cost+1000;
        for(i=0; i<v[j].size(); i++)
        {
            if(v[j][i].ql>=top)
            {
                mn=v[j][i].tk;
                break;
            }
        }
        sum+=mn;
        if(sum>cost)return 0;
    }
    return 1;
}
int main()
{
    ios::sync_with_stdio(false);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,quality,taka,ans,left,right,mid;
        string pd_name,qlt;
        map<string,int>mp;
        cin>>n>>cost;
        left=0;
        ans=-1;
        num=1;
        while(n--)
        {
            string s,g;
            cin>>pd_name>>qlt>>taka>>quality;
            if(mp[pd_name]==0)
            {
                mp[pd_name]=num++;
            }
            v[mp[pd_name]].push_back({taka,quality});
            right=max(right,quality);
        }
        for(int i=1; i<num; i++)sort(v[i].begin(),v[i].end(),comp());
        while(left<=right)
        {
            mid=(left+right)/2;
            if(func(mid))
            {
                ans=mid;
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        cout<<ans<<endl;
        mp.clear();
        for(int i=0;i<=num;i++)v[i].clear();
    }
    return 0;
}

