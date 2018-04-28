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
int  a[100000],b[100000],mx=0,tt,coun,eql,flag,n,m;
vector<int>v,kk;
void func(int sum,int i,int d)
{
    if(i>=m)
    {
        if(sum>mx&&sum<=n&&flag==0)
        {
            v.clear();
            if(sum==n)flag=1;
            mx=sum;
            for(int j=0; j<d; j++)
            {
                v.push_back(b[j]);
            }
        }
        return ;
    }

    b[d]=a[i];
    func((sum+a[i]),(i+1),(d+1));
    func(sum,i+1,d);
}
int main()
{
    long long i,ans;

    while(cin>>n>>m)
    {

        int c[10000];
        for(i=0; i<m; i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
        sort(c,c+m);
        ans=0;
        tt=0;
        eql=0;
        flag=0;
        for(i=0; i<m; i++)
        {
            ans+=c[i];
            if(ans>n)
            {
                break;
            }
        }
        coun=i;
        mx=0;
        func(0,0,0);
        ans=0;
        if(n==0)cout<<"sum:"<<ans<<endl;
        else
        {
            for(i=0; i<v.size(); i++)
            {
                if(v[i]!=0)cout<<v[i]<<" ";
                ans=ans+v[i];
            }
            cout<<"sum:"<<ans<<endl;
        }
        v.clear();
        kk.clear();
    }
    return 0;
}

