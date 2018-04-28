#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        double frst,mn,sum,crnt,scnd;
        frst=(double)10000.0/n;
        mn=10000.0;
        scnd=(double)10000.0/(n+m);
        sum=0;
        mn=0;
        for(int i=1;i<n;i++)
        {
            sum+=frst;
            int tmp=(int)(sum/scnd);
            mn+=min(abs(sum-(tmp*scnd)),abs(sum-(tmp+1)*scnd));
        }
        cout<<setprecision(4)<<fixed;
        cout<<mn<<endl;
    }
    return 0;
}
