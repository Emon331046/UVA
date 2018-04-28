#include<stdio.h>
int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4,a,b;
    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF){
        if(x1==x2&&y1==y2){
                a=x1+x4-x3;
                b=y1+y4-y3;
        }
        else if(x3==x2&&y3==y2){
            a=x1+x4-x2;
            b=y1+y4-y2;
        }
        else if(x1==x3&&y1==y3){
            a=x1+x4-x2;
            b=y1+y4-y2;
        }
        else {
            a=x1+x3-x2;
            b=y1+y3-y2;
        }
        printf("%.3lf %.3lf\n",a,b);
    }
    return 0;
}
