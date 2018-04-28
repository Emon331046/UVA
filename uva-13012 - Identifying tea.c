#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1){
            int a[6],count=0,i;
        scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i=0;i<5;i++)if(a[i]==n)count++;
    printf("%d\n",count);
    }
    return 0;
}
