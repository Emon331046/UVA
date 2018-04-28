#include<bits/stdc++.h>
using namespace std;
vector<int>v[6];
int a[10];
int c[100][100];
int coun=0;
void recursion(int n)
{
    if(coun>=8)
    {
        printf("1");
        for(int i=1;i<=coun;i++)printf("%d",a[i]);
        printf("\n");
        return;
    }
    for(int i=0;i<v[n].size();i++)
    {
        if(c[n][v[n][i]]==0&&c[v[n][i]][n]==0)
        {
            coun++;
            a[coun]=v[n][i];
            c[n][v[n][i]]=1;
            c[v[n][i]][n]=1;
            recursion(v[n][i]);
            coun--;
            c[n][v[n][i]]=0;
            c[v[n][i]][n]=0;
        }

    }
}
int main()
{
    int i,j;

    v[1].push_back(2);
    v[1].push_back(3);
    v[1].push_back(5);

    v[2].push_back(1);
    v[2].push_back(3);
    v[2].push_back(5);

    v[3].push_back(1);
    v[3].push_back(2);
    v[3].push_back(4);
    v[3].push_back(5);

    v[4].push_back(3);
    v[4].push_back(5);

    v[5].push_back(1);
    v[5].push_back(2);
    v[5].push_back(3);
    v[5].push_back(4);

    for(i=0;i<6;i++)for(j=0;j<6;j++)c[i][j]=0;
    recursion(1);
    return 0;
}
