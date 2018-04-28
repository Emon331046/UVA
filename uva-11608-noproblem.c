#include<stdio.h>
#include<ctype.h>
int main()
{
    long long sum,i,t=0;
    while(scanf("%lld",&sum)){
            if(sum<0)break;
            long long a[15],b[15],j,ans;
    for(i=0;i<12;i++)scanf("%lld",&a[i]);
    for(i=0;i<12;i++)scanf("%lld",&b[i]);
    ans=0;
    printf("Case %lld:\n",++t);
    for(j=0;j<12;j++){
        ans=b[j];
        if(sum>=ans){
                printf("No problem! :D\n");
                sum=sum+a[j]-b[j];
        }
        else {
            printf("No problem. :(\n");
            sum=sum+a[j];
        }

    }
    }
    return 0;
}

