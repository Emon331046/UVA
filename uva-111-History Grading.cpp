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
int a[30],mp[30];
int lcs(int n)
{
    int dp[24][24];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i]==mp[j])dp[i][j]=dp[ i-1][ j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

        }
    }
    return dp[n][n];
}
int main()
{
    ios::sync_with_stdio(false);
    string s;
    int n,flag=1,d;
    while(getline(cin,s))
    {
        int tmp;
        stringstream ss;
        ss<<s;
        if(s.size()<=2)
        {
           ss>>n;
           flag=1;
        }
        else if(flag==1)
        {
            d=1;
            while(ss>>tmp)
            {
                mp[tmp]=d;
                d++;
            }
            flag=0;
        }
        else if(flag==0)
        {
            d=1;
            while(ss>>tmp)
            {
                a[tmp]=d;
                d++;
            }
            cout<<lcs(n)<<endl;
        }

    }
    return 0;
}


