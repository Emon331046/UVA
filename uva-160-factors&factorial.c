#include<stdio.h>
int main()
{
    int i,j,count,k,n,t;
    while(scanf("%d",&n)){
        if(n==0)break;
        int b[100]={0};
        for(i=2;i<=n;i++){
            k=0;
            t=i;
            for(j=2; ;j++){
                if(t%j==0){
                    b[k]=b[k]+1;
                    t=t/j;
                    j--;
                }
                else k++;
                if(t==1)break;
        }
        }
        count=0;
        printf("%3d! =",n);
       for(i=0;i<100;i++){
            if(i==51&&n>52 &&count==0){
                    printf("\n      ");
            count=1;
            }
            if(b[i]!=0)printf("%3d",b[i]);

       }
       printf("\n");
    }
    return 0;
}
