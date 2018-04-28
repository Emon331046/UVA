#include<bits/stdc++.h>
using namespace std;
int a[33]= {0},n;
int flag[33]={0};
vector<int>res;
void perm(int *c)
{
    int i;
    if(res.size()==n&&a[res[res.size()-1]+1]){
            printf("1");
        for(i=1;i<res.size();i++)printf(" %d",res[i]);
        printf("\n");
    }
    else {
        for(i=1;i<n;i++){
            if(flag[i]==0&&a[res[res.size()-1]+c[i]]){
                flag[i]=1;
                res.push_back(c[i]);
                perm(c);
                flag[i]=0;
                res.pop_back();
            }
        }
    }
}
int main()
{
    a[2]=1;
    a[3]=1;
    a[5]=1;
    a[7]=1;
    a[11]=1;
    a[13]=1;
    a[17]=1;
    a[19]=1;
    a[23]=1;
    a[29]=1;
    a[31]=1;
    int j,h=0;
    while(scanf("%d",&n)==1)
    {
        h++;
        if(h!=1)printf("\n");
        printf("Case %d:\n",h);
        int c[100];
        for(j=1; j<=n; j++)c[j-1]=j;
        res.push_back(1);
        perm( c);
        res.clear();
    }
    return 0;
}
