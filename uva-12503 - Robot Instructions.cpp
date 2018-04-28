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
    int tst;
    cin>>tst;
    while(tst--)
    {
        string s;
        int n,dp[105];
        cin>>n;
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            if(s[0]=='S')
            {
                cin>>s;
                int a;
                cin>>a;
                dp[i]=dp[a];
            }
            else if(s[0]=='L')
            {
                dp[i]=-1;
            }
            else if(s[0]=='R')
            {
                dp[i]=1;
            }

            cnt+=dp[i];

        }
        cout<<cnt<<endl;
    }
    return 0;
}
