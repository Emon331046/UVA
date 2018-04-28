#include<stdio.h>
#include<math.h>
#define pi 3.141592654
int main()
{
    double l,w,t,h,area,s;
    while(scanf("%lf%lf%lf%lf",&l,&w,&h,&s)!=EOF){
        t=(pi*s)/180;
        t=l*tan(t);
        if(t<=h){
        t=.5*l*w*t;
        area=(l*w*h)-t;}
        else {
            t=pi*(90-s)/180;
            area=h*h*.5*w*tan(t);
        }
        printf("%.3lf mL\n",area);
    }
    return 0;
}
