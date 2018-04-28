#include<stdio.h>
int main()
{
    float h,u,well,r,d,f;
    int day;
    while( scanf("%f%f%f%f",&h,&u,&d,&f) )
    {
        day=1;
        if(h==0)break;
        well=0;
        f=u*f/100;
        while(1)
        {
            if(u>=0)well=well+u;
            u=u-f;

            if(well>h)break;
            well=well-d;
            if( well<0)break;
            day++ ;
        }
        if(well>h)printf("success on day %d\n",day);
        else printf("failure on day %d\n",day);
    }
    return 0;
}
