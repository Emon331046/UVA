#include<stdio.h>
int main()
{
    int test,t=0,a,b,c,count,l;
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%d%d%d",&a,&b,&c);
        l=a+b;
        count=0;
        while(l>c-1){
            l=l-c;
            count=count+1;
            l=l+1;
        }
        printf("%d\n",count);
    }
    return 0;
}
