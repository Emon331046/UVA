#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double h,m,s,d;
    char a;
    while(scanf("%lf%c%lf",&h,&a,&m)){
        if(h==0&&m==0)break;
        if(h==12)h=0;
        h=(double)((h*30)+(m/2));
        m=m*6;
        if(h>m)s=h-m;
        else s=m-h;
        if(s>180)s=360-s;
        printf("%.3lf\n",s);
    }
}
