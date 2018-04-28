#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
queue<pii>s;
int nn;
char ss[100][100];
void func(int n,int m)
{
    char ch[]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(int i=0; i<26; i++)
    {
        int fl1=0,fl2=0,fl3=0,fl4=0;
        if(n-1<0)fl1=1;
        else if(ss[n-1][m]!=ch[i])fl1=1;
        if(n+1>=nn)fl2=1;
        else if(ss[n+1][m]!=ch[i])fl2=1;
        if(m-1<0)fl3=1;
        else if(ss[n][m-1]!=ch[i])fl3=1;
        if(m+1>=nn)fl4=1;
        else if(ss[n][m+1]!=ch[i])fl4=1;
        if(fl1==1&&fl2==1&&fl3==1&&fl4==1)
        {
            ss[n][m]=ch[i];
            break;
        }
    }
}
int main()
{
    int tst,tt=1;
    cin>>tst;
    while(tst--)
    {
        int i,j,n=0,m=0,mx=-1;
        cin>>nn;
        for(i=0; i<nn; i++)for(j=0; j<nn; j++)cin>>ss[i][j];
        for(i=0; i<nn; i++)
        {
            for(j=0; j<nn; j++)
            {
                if(!isalpha(ss[i][j]))
                {
                    func(i,j);
                }
            }
        }
        printf("Case %d:\n",tt++);
        for(i=0; i<nn; i++)
        {
            for(j=0; j<nn; j++)cout<<ss[i][j];
            cout<<endl;
        }
    }
    return 0;

}
