#include<bits/stdc++.h>
using namespace std;
int a[10],n,flag;
vector<int>v;
int colour[100];
void func(int sum,int i)
{
    if(i>=5)
    {
        if(sum==23)
        {
            flag=1;

        }
        return;
    }

    func(sum-v[i],(i+1));
    func(sum+v[i],(i+1));
    func(sum*v[i],(i+1));
    return ;
}
void strng(int pos)
{
    if(pos>=n)
    {
        func(v[0],1);
        return ;
    }
    for(int i=0; i<n; i++)
    {
        if(colour[i]==0)
        {
            colour[i]=1;
            v.push_back(a[i]);
            strng(pos+1);
            v.pop_back();
            colour[i]=0;
        }
    }
}
int main()
{
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4])
    {
        if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0)break;
        n=5;
        flag=0;
        memset(colour,0,sizeof(colour));
        strng(0);
        if(flag==0)printf("Impossible\n");
        if(flag==1)
        {
            printf("Possible\n");
        }
    }
return 0;
}
