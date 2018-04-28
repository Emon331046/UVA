#include<stdio.h>
#include<math.h>
int a[20000001];
long long b[100001][3];
int main()
{
    long long n,i,j,z,k,d=0;

    for(i=2; i<=20000000; i++)a[i]=1;
    for(i=2; i<=sqrt(20000000); i++)
    {
        if(a[i]==1)
        {
            for(j=2; (i*j)<=20000000; j++)a[i*j]=0;
        }
    }
    for(k=3;k<=18409199 ;k=k+2){
        if(a[k]==1&&a[k+2]==1){
            b[d][0]=k;
            b[d][1]=k+2;
            d++;
        }
    }
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)break;
        int count;
        count=n-1;
        printf("(%lld, %lld)\n",b[count][0],b[count][1]);
    }
    return 0;
}

