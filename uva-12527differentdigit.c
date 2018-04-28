#include<stdio.h>
int main()
{
    int i,j,k,sum;
    int a[6000]={0};
    int b[10],n,m;
    for(i=1;i<=5000;i++){
        if(i<10){
            a[i]=1;
        }
        else if(i<100){
            b[0]=i%10;
            b[1]=i/10;
            if(b[0]!=b[1]){
                a[i]=1;
            }
        }

        else if(i<1000){
            b[0]=i%10;
            k=i/10;
            b[1]=k%10;
            b[2]=k/10;
            if(b[0]!=b[1]&&b[0]!=b[2]&&b[1]!=b[2]){
                a[i]=1;
            }
        }
        else if(i<=5000){
            int temp=i;
            b[0]=temp%10;
            temp=temp/10;
            b[1]=temp%10;
            temp=temp/10;
            b[2]=temp%10;
            b[3]=temp/10;
            if(b[0]!=b[1]&&b[0]!=b[2]&&b[0]!=b[3]&&b[1]!=b[2]&&b[1]!=b[3]&&b[2]!=b[3]){
                a[i]=1;
            }
        }
    }
    while(scanf("%d%d",&n,&m)!=EOF){
            sum=0;
        for(i=n;i<=m;i++)sum=sum+a[i];
    printf("%d\n",sum);
    }
    return 0;
}
