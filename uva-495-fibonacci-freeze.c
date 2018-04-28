#include<stdio.h>
int a[5000][500]={0},b[5000][500]={0},c[5000][500]={0};
int main()
{
    int i,d,r,count,temp,n;
    a[3][0]=1;
    b[3][0]=1;
    count=1;
    for(i=3;i<=5000;i++){
        d=0;
        r=0;
        while(1){
            c[i][d]=(r+a[i][d]+b[i][d])%10;
            r=(r+a[i][d]+b[i][d])/10;
            a[i][d]=b[i][d];
            b[i][d]=c[i][d];
            d=d+1;
            if(count==d)break;
        }
        if(r!=0){
            b[i][d]=b[i][d]+r;
            d=d+1;
        }
        if(count<d)count=d;
    }
    while(scanf("%d",&n)!=EOF){

    for(i=500;i>=0;i--){
            if(i==count-1)printf("The Fibonacci number for %d is %d",n,b[n][i]);
            else printf("%d",b[n][i]);
    }
    printf("\n");
    }
    return 0;
}
