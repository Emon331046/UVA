#include<stdio.h>
int gcd(int m,int n)
{
    int t;
    while(n!=0)
    {
        t=m%n;
        m=n;
        n=t;
    }
    return m;
}
int main()
{
    int i,j,g,n;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        g=0;
        for(i=1; i<n; i++)
            for(j=i+1; j<=n; j++)
            {
                g=g+gcd(i,j);
            }
        printf("%d\n",g);
    }
    return 0;
}
