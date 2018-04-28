#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,i,j;
    while(scanf("%d%*c%d",&n,&c)!=EOF){
        int a[2000]={0};
        int b[1000],small,big;
        for(i=2;i<=sqrt(n);i++){
            if(a[i]==0){
                for(j=2;i*j<=n;j++){
                    a[i*j]=1;
                }
            }
        }
        int d=0;
        for(i=1;i<=n;i++){
            if(a[i]==0){
                b[d]=i;
                d++;
            }
        }
        if(c*2>=d){
            small=0;
            big=d-1;
        }
        else if(d%2==0){
            small=(d/2)-c;
            big=(d/2)+c-1;
        }
        else {
            small=(d/2)-(c-1);
            big=(d/2)+(c-1);
        }
        printf("%d %d:",n,c);
        for(i=small;i<=big;i++)printf(" %d",b[i]);
        printf("\n\n");
    }
    return 0;
}
