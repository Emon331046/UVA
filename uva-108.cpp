#include<bits/stdc++.h>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define fill(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define pi acos(-1.0)
#define eps 1e-9
long long temp[105],n;
long long a[105][105];
int kadan( )
{
    long long i,cur=0,ans=-1;
    for(i=0; i<n; i++)
    {
        cur+=temp[i];
        if(cur<0)cur=0;
        if(cur>ans)ans=cur;
    }
    return ans;
}
int main()
{
    long long tc,i=0,j,left,right;
    while(cin>>n)
    {
        int flag=0,aa=-1000000007;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>a[i][j];
                if(a[i][j]>=0)flag=1;
                if(a[i][j]<0&&aa<a[i][j])aa=a[i][j];
            }
        }
        long long curntsum=0,maxsum=-1;
        for(left=0; left<n; left++)
        {
            memset(temp,0,sizeof(temp));
            for(right=left; right<n; right++)
            {
                for(j=0; j<n; j++)temp[j]+=a[j][right];
                curntsum=kadan();
                if(maxsum<curntsum)
                {
                    maxsum=curntsum;
                }
            }
        }
        if(flag==1)cout<<maxsum<<endl;
        else cout<<aa<<endl;
    }

    return 0;
}

