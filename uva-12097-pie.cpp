#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int k,i,j,n,f;
        double a[50050];
        cin>>n>>f;
        for(i=0; i<n; i++)cin>>a[i];
        double mx=0;
        for(i=0; i<n; i++)
        {
            a[i]=a[i]*a[i];
            mx=max(mx,a[i]);
        }
        double l=0,r=mx,mid;
        while(r-l>0.00001)
        {
            mid=(l+r)/2;
            int coun=0;
            for(i=0;i<n;i++)coun+=floor(a[i]/mid);
            if(coun>f)l=mid;
            else r=mid;
        }
        cout <<setprecision(4)<<fixed;
        cout<<l*acos(-1)<<endl;
    }
    return 0;
}

