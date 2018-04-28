#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,min,hour,sum,j;
    while( scanf("%d%d%d%d",&h1,&m1,&h2,&m2) ){
        if(h1==0 && h2==0 && m1==0 && m2==0 )break;
        j=0;
        if(m1>m2){
            m2= 60 + m2;
            j=1;
        }
        h1=h1+j;
        if(h1>h2) h2 = 24+h2;
        min = m2 - m1;
        hour = h2 - h1;
        sum= ( hour*60 ) + min ;
        printf("%d\n",sum);
    }
    return 0;
}
