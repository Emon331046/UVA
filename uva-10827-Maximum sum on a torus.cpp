#include<bits/stdc++.h>
using namespace std;
int temp[500]= {0},n;
int kadan(int m)
{
    int mx=0,crnt=0;
    for(int i=m; i<m+n; i++)
    {
        crnt+=temp[i];
        if(crnt<0)crnt=0;
        if(crnt>mx)mx=crnt;
    }
    return mx;
}
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int k,i,j,h,left,right,aa=0;
        int a[500][500];
        cin>>n;
        for(int i=0; i<n; i++)for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
                if(aa<a[i][j])aa=a[i][j];
            }
        for(i=0; i<n; i++)for(j=n,k=0; j<2*n; j++,k++)a[i][j]=a[i][k];
        for(i=n,k=0; i<2*n; i++,k++)for(j=0; j<n; j++)a[i][j]=a[k][j];
        for(i=n,k=0; i<2*n; i++,k++)for(j=n,h=0; j<2*n; j++,h++)a[i][j]=a[k][h];
        int current_sum=0,mx_sum=0;
        for(left=0; left<n; left++)
        {
            memset(temp,0,sizeof(temp));
            for(right=left; right<n+(left); right++)
            {
                for(int j=0; j<2*n; j++)temp[j]+=a[j][right];
                for(int g=0; g<n; g++)
                {
                    current_sum=kadan(g);
                    if(mx_sum<current_sum)mx_sum=current_sum;
                }
            }
        }
        cout<<mx_sum<<endl;
    }
    return 0;
}
