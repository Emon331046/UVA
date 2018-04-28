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
long long high,low,coun;
long long a[5000005],tmp[5000005];
void merge_sort(int low,int high)
{
    if(low==high)return;
    int mid=(low+high)/2;
    merge_sort(low,mid);
    merge_sort(mid+1,high);
    int i,j,k;
    for(i=low,j=mid+1,k=low;k<=high;k++)
    {
        if(i==mid+1)
        {
            tmp[k]=a[j];
            j++;
        }
        else if(j==high+1)
        {
            tmp[k]=a[i];
            i++;
        }
        else if(a[i]>a[j])
        {
            tmp[k]=a[j];
            coun+=j-k;
            j++;
        }
        else
        {
            tmp[k]=a[i];
            i++;
        }
    }
    for(i=low;i<=high;i++)a[i]=tmp[i];
}
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        coun=0;
        int i,j,k;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        merge_sort(0,n-1);
        printf("%lld\n",coun);
    }
    return 0;
}
