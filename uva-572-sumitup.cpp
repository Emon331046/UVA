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
ll n,m;
int b[100];
ll a[1000];
set< vector<int > >s;
int flag=0;
void func(long long sum,long long i,int d)
{
    if(sum==n)
    {
        flag=1;
        vector<int>v;
        for(int j=0;j<d;j++)v.push_back(b[j]);
        s.insert(v);
        return ;
    }
    if(i>=m||sum>n)
    {
       return ;

    }
    b[d]=a[i];
    func(sum+a[i],i+1,d+1);
    func(sum,i+1,d);
}
int main()
{
    while(cin>>n>>m)
    {
        if(m==0&&n==0)break;
        int i;
        flag=0;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
        func(0,0,0);

    set<vector<int> >::iterator it;
     vector<int >v[500];
     int d=0;
     for(  it = s.begin();it != s.end(); it++)
     {
       const vector<int>& g=(*it);
       for(int j=0;j<g.size();j++){
        v[d].push_back(g[j]);
       }
       d++;
     }
     printf("Sums of %d:\n",n);
     if(flag==0)printf("NONE\n");
     else{

     for(int i=d-1;i>=0;i--)
     {
         cout<<v[i][0];
         for(int kk=1;kk<v[i].size();kk++)
         {
             cout<<"+"<<v[i][kk];
         }
         cout<<endl;
     }
     }
     s.clear();
     for(int i=0;i<500;i++)v[i].clear();
    }
    return 0;
}
