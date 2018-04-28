#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long m,n,i,s,g,f;
    double d;
    while(scanf("%lld",&m)){
        if(m<2)break;
        f=0;
        if(m==2||m==3||m==5||m==7||m==11||m==13||m==17||m==19||m==23){f=1;
        n= pow(2,m-1)*(pow(2,m)-1);
        g=sqrt(n);
        s=0;
        for(i=1;i<=g;i++){
            if(n%i==0){
                s=s+i+(n/i);
            }
        }
        s=s/2;}
        if(m==31)printf("Perfect: 2305843008139952128!\n");
        else if(s==n&&f==1)printf("Perfect: %lld!\n",n);
        else if(f==1||m==29)printf("Given number is prime. But, NO perfect number is available.\n");
        else printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
