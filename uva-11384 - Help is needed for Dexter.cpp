#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long a[32];
    a[0]=1;
    for(int i=1;i<32;i++)a[i]=a[i-1]*2;
    while(cin>>n)
    {
        int i;
        for(i=0;i<31;i++)if(a[i]-1>=n)
        {
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}
