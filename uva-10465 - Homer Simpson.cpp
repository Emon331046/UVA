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

int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("");
    ofstream fout ("");
    int m,n,t;
    while(cin>>m>>n>>t)
    {
     int dp[10005]={0};
     dp[n]=1;
     dp[m]=1;
    for(int i=0;i<=t;i++)
    {
        if(dp[i])
        {
            dp[i+n]=max(dp[i+n],dp[i]+1);
            dp[i+m]=max(dp[i+m],dp[i]+1);
        }
    }
    if(dp[t]) cout<<dp[t]<<endl;
    else
    {
        int i;
        for(i=t;i>=0;i--)
        {
            if(dp[i])
            {
                cout<<dp[i]<<' '<<t-i<<endl;
                break;
            }
        }
        if(i==-1)cout<<'0'<<' '<<t<<endl;
    }

    }
    return 0;
}
/*\
#include<bits/stdc++.h>
using namespace std;
#define pii pair<long long,long long>

int main()
{
    int test,n,m,t;
    while(cin>>n>>m>>t)
    {
    int mx=0;
    for(int i=0;i<=t;i++)
    {
        int mp1,mp2;
        mp1=i/n;
        mp2=(t-i)/m;
        if(i%n==0&&(t-i)%m==0)mx=max(mx,mp1+mp2);
    }
    if(mx==0)
    {
        int min_dif=99999;
        for(int i=0;i<=t;i++)
        {
            if(i%n+(t-i)%m<min_dif)
            {
                min_dif=i%n+(t-i)%m;
                mx=i/n+(t-i)/m;
            }
            if(i%n+(t-i)%m==min_dif)
            {
                mx=max(mx,i/n+(t-i)/m);
            }
        }
        cout<<mx<<' '<<min_dif<<endl;
    }
    else cout<<mx<<endl;
    }
    return 0;
}
*/

