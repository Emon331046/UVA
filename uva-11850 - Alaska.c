#include<stdio.h>
#include<string.h>

int main()
{
    int test;
    while(scanf("%d",&test)==1){
            if(test==0)break;
        int a[10000],i,j,temp;
        for(i=0;i<test;i++)scanf("%d",&a[i]);
        for(i=0;i<test-1;i++)for(j=i;j<test;j++)if(a[j]<a[i]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
        a[test]=a[test-1]+2*(1422-a[test-1]);
        for(i=0;i<test;i++)if(a[i+1]-a[i]>200)break;
        if(i==test)printf("POSSIBLE\n");
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}
