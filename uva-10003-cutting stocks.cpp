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
ll dp[55][55];
ll a[55],l,n;
int func_dp(int start,int endd)
{
    if(start==endd-1)return 0;
    if(dp[start][endd]!=-1)
    {
        return dp[start][endd];
    }
    long long mn=99999999999;
    ll dif=a[endd]-a[start];
    for(int i=start+1; i<endd; i++)
    {
        mn=min(mn,func_dp(start,i)+func_dp(i,endd)+dif);
    }
    return dp[start][endd]=mn;
}
int main()
{
    ios::sync_with_stdio(false);
    while(cin>>l)
    {
        if(l==0)break;
        cin>>n;
        a[0]=0;
        for(int i=1; i<=n; i++)cin>>a[i];
        a[n+1]=l;
        memset(dp,-1,sizeof(dp));
        cout<<"The minimum cutting is "<<func_dp(0,n+1)<<"."<<endl;

    }
    return 0;
}


