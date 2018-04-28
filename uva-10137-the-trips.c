#include<stdio.h>
#include<math.h>
int main()
{
    int test,i;
    while(scanf("%d",&test)){
        if(test==0)break;
        double a[1000],dif=0,sum=0,d,neg;
        for(i=0;i<test;i++){
            scanf("%lf",&a[i]);
            sum=sum+a[i];
        }
        sum=sum/test;
        d=0;
        neg=0;
        for(i=0;i<test;i++){
                dif=(double)(int)((a[i]-sum)*100)/100.0;

            if(dif>=0)d=d+dif;
            else neg=neg-dif;
        }
        if(d>neg)printf("$%.2lf\n",d);
        else printf("$%.2lf\n",neg);
    }
    return 0;
}
