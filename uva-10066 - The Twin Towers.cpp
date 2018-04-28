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
int a[105],b[105];
int lcs(int n,int m)
{
    int dp[105][105];
    memset(dp,0,sizeof(dp));
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=m ; j++)
        {
            if(a[i]==b[j])dp[ i ][ j ]=dp[ i-1 ][ j-1 ]+1;
            else dp[ i ][ j ]=max(dp[ i-1 ][ j ],dp[ i ][ j-1 ]);
        }
    }
    return dp[n][m];
}
int main()
{
    ios::sync_with_stdio(false);
    int n,m,tst=1;
    int flag=0;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)break;
        //if(flag)
        flag=1;

        for(int i=1 ; i<=n  ; i++ )cin>>a[i];
        for(int i=1 ; i<=m ; i++ )cin>>b[i];

        cout<<"Twin Towers #"<<tst++<<endl;
        cout<<"Number of Tiles : "<<lcs(n,m)<<endl;
            cout<<endl;
    }

    return 0;
}


