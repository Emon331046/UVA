#include<bits/stdc++.h>
using namespace std;
int flag[10],s[10][10],temp,dd,n,m;
vector<int>v[100];
bool check(int row,int c)
{
    for(int i=1; i<row; i++)
    {
        if(flag[i]==c)return 0;
        if(abs(i-row)==abs(flag[i]-c))return 0;
    }
    return 1;
}
void queen(int row)
{
    if(row>8)
    {
        if(flag[n]==m)
        {
            printf(" %d      %d",dd,flag[1]);
            for(int i=2; i<=8; i++)
            {
                cout<<' '<<flag[i];
            }
            cout<<endl;
            dd++;
        }
    }
    for(int i=1; i<=8; i++)
    {
        if(check(row,i))
        {
            flag[row]=i;
            queen(row+1);
            flag[row]=-1;
        }
    }
}
int main()
{
    int test,t=0;
    cin>>test;
    while(test--)
    {
        cin>>m>>n;
        memset(flag,-1,sizeof(flag));
        temp=0;
        dd=1;
        if(t!=0)printf("\n");
        t=1;
        printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
        queen(1);

    }
    return 0;
}
