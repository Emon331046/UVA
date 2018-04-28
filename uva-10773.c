//back to intermidiate
#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,d,p,i,j;
    int t=0,test;
    scanf("%d",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        scanf("%lf%lf%lf",&d,&v,&u);
        if(u<=v || u<=0 || v<=0 )printf("Case %d: can't determine\n",t);
        else
        {
            i=d/u;
            j=(u*u) - (v*v);
            j=sqrt(j);
            j=d/j;
            p=j-i;
            printf("Case %d: %.3lf\n",t,p);
        }
    }
    return 0;
}
