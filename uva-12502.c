//three-family
#include<stdio.h>
int main()
{
    double a,b,c,d;
    int t=0,test;
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%lf%lf%lf",&a,&b,&c);
        d=(a+b)/3;
        a=a-d;
        b=b-d;
        a=(a*c)/(a+b);
        printf("%.0lf\n",a);
    }
    return 0;
}
