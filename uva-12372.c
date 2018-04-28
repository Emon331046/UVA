//packing for holiday
#include<stdio.h>
int main()
{
    int test,t=0,a,b,c,d=20;
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(test<t)break;
        scanf("%d%d%d",&a,&b,&c);
        if( a>d || b>d || c>d ) printf("Case %d: bad\n",t);
        else printf("Case %d: good\n",t);
    }
    return 0;
}
