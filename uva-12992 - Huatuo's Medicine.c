#include<stdio.h>
int main()
{
    int test,n,m,t=0;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        m=2*n;
        m--;
        printf("Case #%d: %d\n",++t,m);
    }
    return 0;
}
