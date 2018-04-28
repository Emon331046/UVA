#include<bits/stdc++.h>
using namespace std;

int prime(long long n)
{
    int i;
    for( i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int a,b;
    map<int,int>mymap;
    for(int i=0; i<=10000; i++)
    {
        long long n;
        n=(i*i)+i+41;
        mymap[i]=prime(n);
    }
    while(scanf("%d%d",&a,&b)==2)
    {
        double s,d,f;
        int c=0,i;
        for(i=a; i<=b; i++)
        {
            int temp;
            temp=mymap[i];
            c=c+temp;
        }
        s=c;
        d=b-a+1;
        f=((s/d)*100)+1.0e-7;
        printf("%.2lf\n",f);
    }
    return 0;
}
