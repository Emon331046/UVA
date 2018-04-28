#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double l,w,r,red,green,test,t=0;
    scanf("%lf",&test);
    while( 1 )
    {
        t=t+1;
        if(t>test)break;
        scanf("%lf",&l);
              r= l/5;
              w= l*6/10;
              red= pi*r*r ;
              green= (l*w)-red ;
              printf("%.2lf %.2lf\n",red,green);
    }
    return 0;
}
