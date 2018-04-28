#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,r,a,b,m;
    int t=0,test;
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%lf%lf%lf",&x,&y,&r);
        m=(x*x)+(y*y);
        m=sqrt(m);
        a=r+m;
        b=r-m;
        printf("%.2lf %.2lf\n",b,a);
    }
    return 0;
}
