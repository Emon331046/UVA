#include<stdio.h>
int main()
{
    int i,d,r,count,temp,n;
    while(scanf("%d",&n)!=EOF){
    int a[10000]={0},b[10000]={0},c[10000]={0};
    a[0]=1;
    b[0]=1;
    count=1;
    for(i=1;i<=n;i++){
        d=0;
        r=0;
        while(1){
            c[d]=(r+a[d]+b[d])%10;
            r=(r+a[d]+b[d])/10;
            a[d]=b[d];
            b[d]=c[d];
            d=d+1;
            if(count==d)break;
        }
        if(r!=0){
            b[d]=b[d]+r;
            d=d+1;
        }
        if(count<d)count=d;
    }
    for(i=count-1;i>=0;i--)printf("%d",b[i]);
    printf("\n");
    }
    return 0;
}

