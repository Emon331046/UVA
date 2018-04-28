#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int a[]= {2,3,4,5,6,7,8,9};
    while(test--)
    {
        long long n;
        int coun[10]={0};
        cin>>n;
        if(n==0)printf("0\n");
        else if(n==1)printf("1\n");
        else
        {
            for(int i=7; i>=0; i--)
            {
                if(n%a[i]==0)
                {
                    while(n%a[i]==0)
                    {
                        n=n/a[i];
                        coun[a[i]]++;
                    }
                }
            }
            if(n>1)printf("-1\n");
            else
            {
                for(int i=0;i<8;i++)
                {
                    if(coun[a[i]]!=0)
                    {
                        for(int j=0;j<coun[a[i]];j++)cout<<a[i];
                    }
                }
                cout<<endl;
            }
        }

    }
    return 0;
}
