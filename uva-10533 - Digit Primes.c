#include<stdio.h>
#include<string.h>
int a[1000000],b[1000000];
int main()
{
    int i,j,temp,sum;
    a[0]=0;
    a[1]=0;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(i=2; i<=sqrt(1000000); i++)
    {
        if(a[i]==0)
        {
            for(j=2; j*i<=1000000; j++)a[i*j]=1;
        }
    }
    for(i=3; i<=1000000; i++)
    {
        if(a[i]==0)
        {
            int temp;
            temp=i;
            sum=0;
            while(temp!=0)
            {
                sum=sum+(temp%10);
                temp=temp/10;
            }
            if(a[sum]==0)
            {
                b[i]=b[i-1]+1;
            }
            else b[i]=b[i-1];
        }
        else b[i]=b[i-1];
    }
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int c;
        c=b[m]-b[n];
        int s,t;
        s=0;
        t=n;
        while(t!=0){
            s=s+(t%10);
            t=t/10;
        }
        if(a[n]==0&&a[s]==0)c++;
        printf("%d\n",c);
    }
    return 0;
}
