#include<stdio.h>
int main()
{
    long long a,test,t=0,tax;
    double c;
    scanf("%lld",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%lld",&a);
        if(a<=180000)tax=0;
        else if(a>180000&&a<=480000){
            c=(double) (a-180000)*.1;
            tax=c;
            if(c>tax)tax=tax+1;
            if(tax<=2000)tax=2000;
        }
        else if(a>480000&&a<=880000){
            c= (double)((300000*.1)+((a-480000)*.15));
            tax=c;
            if(c>tax)tax=tax+1;
        }
        else if(a>880000&&a<=1180000){
            c=(double) (((a-880000)*.20)+(300000*.1)+(400000*.15));
            tax=c;
            if(c>tax)tax=tax+1;
        }
        else if(a>1180000){
            c=(double) (((a-1180000)*.25)+(300000*.1)+(400000*.15)+(300000*.2));
            tax=c;
            if(c>tax)tax=tax+1;

        }
        printf("Case %lld: %lld\n",t,tax);
    }
    return 0;
}
