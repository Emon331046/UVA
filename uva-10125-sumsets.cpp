
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

#define sf1(x) scanf("%d",&x)
#define sfch(ch) scanf("%c",&ch)
#define sfs(s) scanf("%s",&s)
#define pfc(x) printf("Case %d: ",x)
#define pfcn(x) printf("Case %d:\n",x)
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define pf4(x,y,z,m) printf("%d %d %d %d\n",x,y,z,m)
#define mod 1000000007
#define ll long long
#define llu unsigned long long
#define pii pair<int,int>
#define PI acos(-1.00)
#define pb push_back
#define ppb pop_back
struct lol
{
    long long x;
    long long y;
    long long z;
} sum[1000000];
class comp
{
public:
    bool operator()(lol a,lol b)
    {
        return a.z<b.z;
    }
};
int main()
{
    long long n,ans=0;
    while(cin>>n)
    {
        if(n==0)break;
        long long a[100000];
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        int d=0;
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                    sum[d].z=a[i]+a[j];
                    sum[d].x=i;
                    sum[d].y=j;
                    d++;
            }
        }
        sort(sum,sum+d,comp());
        int flag=0;
        long long mmm=-99999999999;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<i;j++)
            {
                if(i==j)continue;
                ans=a[i]-a[j];
                int mid,l,f;
                l=0;
                f=d;
                while(l<f)
                {
                    mid=(l+f)/2;
                    if(sum[mid].z==ans&&sum[mid].x!=i&&sum[mid].y!=i&&sum[mid].x!=j&&sum[mid].y!=j)
                    {
                        mmm=a[i];
                        flag=1;
                        break;
                    }
                    else if(sum[mid].z>ans)
                    {
                        f=mid-1;
                    }
                    else
                    {
                        l=mid+1;
                    }
                }
                if(flag==1)break;
            }
            if(flag==1)break;
        }

        if(flag==1)printf("%lld\n",mmm);
        else printf("no solution\n");
    }
    return 0;
}
