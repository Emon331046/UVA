#include<stdio.h>
int main()
{
    int test,i=0,r,left,right,upper,lower;
    scanf("%d",&test);
    while(test--){
        i++;
        scanf("%d",&r);
        left=-((9*r)/4);
        right=(11*r)/4;
        upper=(3*r)/2;
        lower=-(3*r)/2;
        printf("Case %d:\n",i);
        printf("%d %d\n%d %d\n%d %d\n%d %d\n",left,upper,right,upper,right,lower,left,lower);
    }
    return 0;
}
