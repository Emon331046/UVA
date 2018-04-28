#include<stdio.h>
int main()
{
    int a[1000],t=0,test,i,count,sum,s;
    while(scanf("%d",&test)){
        if(test==0)break;
        t=t+1;
        count=0;
        sum=0;
        for(i=0;i<test;i++)scanf("%d",&a[i]);
        for(i=0;i<test;i++){
            if(a[i]==0)count=count+1;
            else sum=sum+1;
        }
        s=sum-count;
        printf("Case %d: %d\n",t,s);
    }
    return 0;
}
