#include<stdio.h>
int main()
{
    long long test=0,n,m;
    while(scanf("%lld",&m)!=EOF){
            test=test+1;
            n=m;
            long long a=0,b=0,c=0,d=0,f=0,g=0,h=0,i=0,e=0,t=0;
            a=n%100;
            n=n/100;
        if(n!=0){
            b=n%10;
            n=n/10;
        }
        if(n!=0){
            c=n%100;
            n=n/100;
        }
        if(n!=0){
            d=n%100;
            n=n/100;
        }

        if(n!=0){
            e=n%100;
            n=n/100;
        }
        if(n!=0){
            f=n%10;
            n=n/10;
        }
        if(n!=0){
            g=n%100;
            n=n/100;
        }
        if(n!=0){
            h=n%100;
            n=n/100;
        }
        if(n!=0){
            i=n%100;
            n=n/100;
        }
        printf("%4lld.",test);
        if(i!=0){printf("% lld kuti",i);
        t=1;}
        if(h!=0){
                printf("% lld lakh",h);
                t=1;
                }
        if(g!=0){
                printf(" %lld hajar",g);
                t=1;
        }
        if(f!=0){
                printf(" %lld shata",f);
                t=1;
        }
        if(e==0&&t==1)printf(" kuti");
        if(e!=0){
        printf(" %lld kuti",e);
        t=1;
        }
        if(d!=0){
                printf(" %lld lakh",d);
                t=1;
        }
        if(c!=0){
                printf(" %lld hajar",c);
                t=1;
        }
        if(b!=0){
                printf(" %lld shata",b);
                t=1;
        }
        if(a!=0){
                printf(" %lld",a);

        }
        if(m==0)printf(" %lld",n);
        printf("\n");
    }
    return 0;
}
