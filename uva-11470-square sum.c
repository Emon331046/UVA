#include<stdio.h>
int main()
{
    int i,j,n,d=0,test;
    while(scanf("%d",&n)){
            if(n==0)break;
            if(n%2==1)test=(n/2)+1;
            else test=n/2;
           int s[100][100],sum[1000]={0};
        for(i=0;i<n;i++)for(j=0;j<n;j++){
                scanf("%d",&s[i][j]);
                sum[0]=sum[0]+s[i][j];
        }
        int a=1,b=n-1;
        while(a<=b){
        for(i=a;i<b;i++)for(j=a;j<b;j++)sum[a]=sum[a]+s[i][j];
            a++;
            b--;
        }
        printf("Case %d: ",++d);
        for(i=0;i<test;i++){sum[i]=sum[i]-sum[i+1];
        printf("%d",sum[i]);
        if(i!=test-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}
