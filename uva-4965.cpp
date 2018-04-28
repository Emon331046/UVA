#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,m;
    while(cin>>m>>n)
    {
        if(m==0||n==0)break;
        int d=1,s=1,i,j,coun=0;
        long long  temp,sum;
        int check[100000]= {0};
        int b[100000],a[100000];
        int check1[100000]= {0};
        temp=m;
        a[0]=m;
        while(temp!=1)
        {
            sum=0;
            while(temp)
            {
                sum=sum+(temp%10)*(temp%10);
                temp=temp/10;
            }
            temp=sum;
            if(check[temp]==0)
            {
                check[temp]=1;
                a[d]=temp;
                d++;

            }
            else break;
        }
        temp=n;
        b[0]=n;
        while(temp!=1)
        {
            sum=0;
            while(temp)
            {
                sum=sum+(temp%10)*(temp%10);
                temp=temp/10;
            }
            temp=sum;
            if(check1[temp]==0)
            {

                b[s]=temp;
                s++;
                check1[temp]=1;
            }
            else
            {
                break;
            }
        }
        int flag=0;
        for(i=0; i<d; i++)
        {
            for(j=0; j<s; j++)if(a[i]==b[j])
                {
                    flag=1+i+1+j;
                    break;
                }
            if(flag)
            {
                break;
            }
        }

        printf("%lld %lld %d\n",m,n,flag);

    }
    return 0;
}
