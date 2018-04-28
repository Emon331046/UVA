#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932384626433

int main ()
{
   double r,deg,arc,chord,rad,g;
   char s[100];
   while(scanf("%lf%*c%lf%*c%s",&r,&deg,&s)!=EOF){
    if(s[0]=='m'){
            if(deg>180)deg=360-deg;
            deg=deg/60;
            rad=(PI*deg)/180.0;
    }
    else {
            if(deg>180)deg=360-deg;
    rad=(PI*deg)/180.0;
    }
    r=r+6440;
    chord=2*r*sin(rad/2.0);
    arc=(rad*r);
    printf("%.6lf %.6lf\n",arc,chord);
   }
   return(0);
}
