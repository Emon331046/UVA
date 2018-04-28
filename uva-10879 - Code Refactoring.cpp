#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,test,t=0;
    cin>>test;
    while(test--)
    {
        t++;
        cin>>n;
        cout<<"Case #"<<t<<": "<<n<<" ";
        int j=0,i,r;
        for(i=2;i<=n;i++){
            if(n%i==0){
                    if(j==1)printf(" ");
                printf("= %d * %d",i,(n/i));
            j++;
            }
            if(j==2)break;
        }
        if(i==n+1)printf(" = %d * 0",r);
        cout<<'\n';
    }
    return 0;
}
