#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int tst,t=1,n;
    cin>>tst;
    while(tst--)
    {
        long long a[100000];
        cin>>n;
        long long mx,mn,ans=-9999999999999;
        for(int i=0;i<n;i++)cin>>a[i];
        mx=a[0];
        for(int i=1;i<n;i++)
        {
            long long tmp=mx-a[i];
            if(tmp>ans)ans=tmp;
            if(mx<a[i])
            {
                mx=a[i];
            }
        }
    cout<<ans<<endl;
    }
    return 0;
}


