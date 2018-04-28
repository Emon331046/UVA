
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

int main()
{
    int n,i;
    while(sf1(n)==1)
    {
        if(n==0)break;
        getchar();
        int pos[100000],a[100000];
        for(i=0; i<n; i++)
        {
            sf1(a[i]);
            pos[a[i]]=i;
        }
        int flag=0;
        int lim=(n+2)/3;
        for(int d=1; d<=lim+2; d++)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]+d+d>=n)continue;
                if(pos[a[i]]<pos[a[i]+d]&&pos[a[i]+d]<pos[a[i]+d+d])
                {
                    flag=1;
                    break;
                }
                if(pos[a[i]]>pos[a[i]+d]&&pos[a[i]+d]>pos[a[i]+d+d])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)break;
        }
        if(flag)printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
