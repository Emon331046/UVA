#include<bits/stdc++.h>
using namespace std;
int a[10];
int dp[100];
int b[10],c[10],n,flg=0;
void func(int sum,int i,int coun)
{
    if(coun==5)
    {
        int d=0,flag=0,ans;
        ans=sum*n;
        cout<<ans<<' '<<sum<<endl;;
        while(ans!=0)
        {
            c[d]=ans%10;
            if(dp[c[d]]==1)flag=1;
            dp[c[d]]=1;
            ans=ans/10;
            d++;
        }
        for(i=0;i<d;i++)
        {
            dp[c[i]]=0;
        }
        /*if(flag==0&&d==5)
        {
            flg=1;
            for(i=0;i<5;i++)cout<<b[i];
            cout<<'/';
            for(i=0;i<5;i++)cout<<a[i];
            cout<<endl;
        }*/
        return ;
    }
    if(i>9)return ;
    dp[a[i]]=1;
    func((sum*10)+a[i],i+1,coun+1);
    dp[a[i]]=0;
    func(sum,i+1,coun);
}
int main()
{
    int test;
    cin>>n;
    while(1)
    {
        a[0]=0;
        a[1]=1;
        a[2]=2;
        a[3]=3;
        a[4]=4;
        a[5]=5;
        a[6]=6;
        a[7]=7;
        a[8]=8;
        a[9]=9;
        flg=0;
        func(0,0,0);
        if(flg)printf("There are no solutions for %d.\n",n);
        cin>>n;
        if(n==0)break;
        cout<<endl;
    }
    return 0;
}
