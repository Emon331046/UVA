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
int high,low,cost,mn;
int tree[400005],a[100005];
void input(int node,int start,int finish)
{
    if(start==finish)
    {
        tree[node]=a[start];
        if(tree[node]>=cost)mn=1;
        return ;
    }
    int mid;
    mid=(start+finish)/2;
    input(node*2,start,mid);
    input(2*node+1,mid+1,finish);
    tree[node]=tree[node*2]+tree[node*2+1];
    if(tree[node]>=cost&&mn>(finish-start+1))
    {
        mn=finish-start+1;
        low=start;
        high=finish;
    }
}
int main()
{
    int n;
    while(scanf("%d%d",&n,&cost)==2)
    {
        long long sum=0;
        int i,j,k;
        mn=999999;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if(sum<cost)printf("0\n");
        else
        {
            /*sum=0;
            for(i=high;i>=0;i--)
            {
                sum+=a[i];
                if(sum>=cost)
                {
                    low=i;
                    break;
                }
            }
            long long ss=0;
            for(j=high+1;j<n;j++)
            {
                if(ss)
            }*/
            input(1,0,n-1);

              int  x=0;
               int y=0;
                int an=mn;
                int bn=mn;
                for(i=low;i<=high;i++)
                {
                    x+=a[i];
                    if(x>=cost)
                    {
                        an=i-low+1;
                        if(an<mn)mn=an;
                    }
                }
                for(i=high;i>=low;i--)
                {
                    y+=a[i];
                    if(y>=cost)
                    {
                        bn=high-i+1;
                        if(bn<mn)mn=bn;
                    }
                }
                printf("%d\n",mn);
        }
    }
    return 0;
}

