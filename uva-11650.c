//mirror clock
#include<stdio.h>
int main()
{
    int h,m,oh,om,j=0,n;
    char a=':';
    scanf("%d",&n);
    while( 1 )
    {
         if(j>=n)break;
         scanf("%d%c%d",&h,&a,&m);
        if(h==12)h=0;
        if(m!=0)
        {
            if(h==11)oh=12;
             else oh=12-h-1;
            om=60-m;
        }
        else
        {
            oh=12-h;
            om=m;
        }
        j=j+1;
        printf("%02d%c%02d\n",oh,a,om);
    }
    return 0;
}
