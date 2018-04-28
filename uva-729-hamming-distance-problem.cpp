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
#define pii pair<pii,int>
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
int a[1000],b[1000],n;
int main()
{
    long long i,m,test;
    cin>>test;
   while(test--)
   {
    cin>>n>>m;
    memset(a,0,sizeof(a));
    for(i=0;i<m;i++)
    {
        a[i]=1;
    }
    sort(a,a+n);
    set<vector<int> >s;
    do
    {
        vector<int>v;
        for(i=0;i<n;i++)v.push_back(a[i]);
        s.insert(v);

    }while(next_permutation(a,a+n));
    set<vector<int> >::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        const vector<int>& g=*it;
        for(i=0;i<n;i++)cout<<g[i];
        cout<<endl;
    }
    if(test!=0)cout<<endl;
   }
    return 0;
}

