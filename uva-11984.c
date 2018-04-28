#include<stdio.h>
int main()
{
    double c,d,m;
    int i,t;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
           scanf("%lf%lf",&c,&d);
           m=c + d*5/9;
           printf("Case %d: %.2lf\n",i,m);
        }
    }
    return 0;
}
