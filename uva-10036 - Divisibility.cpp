#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define pb push_back
#define Pb pop_back
#define sf1(x) scanf("%d", &x)
#define sf2(x,y) scanf("%d %d", &x, &y)
#define sf3(x,y,z) scanf("%d %d %d", &x, &y, &z)
#define pf1(x) printf("%d\n", x)
#define PI acos(-1.00)
#define pii pair<int,int>
#define ppi pair<pii,int>
#define INTMAX 1<<30
#define MOD 1000000007
#define ll long long
#define llu unsigned long long
#define eps .0000001
#define zero 0.0000000000000001
#define floatless(a,b) ( (a-b)<=eps )
#define floatequal(a,b) ( floatless(a,b) && floatless(b,a) )
#define incircle_r(a,b,c) 2*area(triangle)/perimeter(triangle)
#define circumcircle_R(a,b,c) a*b*c/sqrt( (a+b+c)*(a+b-c)*(b+c-a)*(c+a-b) )
#define circumcircle_2R_sinelaw a/sinA
#define triarea(a,b,c) sqrt( (a+b+c)*(b+c-a)*(a-b+c)*(a+b-c) )/9
#define mediantoarea(a,b,c) (4/3)*triarea(a,b,c)
using namespace std;
int m,n,flag=0,a[10005];
int dp[105][10005];
int func(int coun,int i)
{
    coun%=m;

    if(i==n)
    {
        if(coun==0)return 1;
        return 0;
    }
    if(dp[coun][i]!=-1)
    {
        //cout<<coun<<' '<<i<<' '<<dp[coun][i]<<endl;
        return dp[coun][i];
    }
    bool check=false;
    check=check|func(((coun+a[i])%m+m)%m,i+1);
    check=check|func(((coun-a[i])%m+m)%m,i+1);
    dp[coun][i]=check;
    return dp[coun][i];
}
int main()
{
    long long i,test;
    cin>>test;
    while(test--)
    {
        flag=0;
        cin>>n>>m;
        memset(dp,-1,sizeof(dp));
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n!=0)flag=func(0,0);
        if(flag==1)cout<<"Divisible"<<endl;
        else cout<<"Not divisible"<<endl;
    }

    return 0;
}



