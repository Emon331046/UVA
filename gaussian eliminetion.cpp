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
    int tst,tt=1;
    sf1(tst);
    while(tst--)
    {
        for(int i=0;i<n;i++)
        {
            int mx=a[i][i];
            int id=i;
            for(int j=0;j<n;j++)
            {
                if(a[j][i]>mx)
                {
                    mx=a[j][i];
                    id=j;
                }
            }
            if(id!=i)
            {
                //swap raw
                for(int k=i;k<n;k++)
                {
                    swap(a[i][k],a[id][k]);
                }
            }
            for(int j=0;j<n;j++)
            {
                if(j!=i)
                {
                    double factor=a[j][i]/a[i][i];
                    for(int k=i;k<n;k++)
                    {
                        a[j][k]-=factor*mat[i][k];
                    }
                }
            }
        }
    }
    return 0;
}

