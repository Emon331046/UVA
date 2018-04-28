#include<stdio.h>
#include<math.h>
int main()
{
    long long s;
    double m,d,c;
    while(scanf("%lf%lf",&m,&d)!=EOF){
        c=2*(d+((m*(m-1))/2));
        c=(-1+sqrt(1+(4*c)))/2;
        s=(int) c;
        if(c>s)s=s+1;
        printf("%lld\n",s);
    }
    return 0;
}
