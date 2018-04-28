#include<stdio.h>
int main()
{
    int n,test,temp,i,j,d;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        int a[10]={0},c[10]={0};
        for(i=1;i<=n;i++){
            temp=i;
            d=0;
            while(temp!=0){
                a[d]=temp%10;
                temp=temp/10;
                d++;
            }
           for(j=0;j<d;j++){
            if(a[j]==0)c[0]=c[0]+1;
            else if(a[j]==1)c[1]=c[1]+1;
            else if(a[j]==2)c[2]=c[2]+1;
            else if(a[j]==3)c[3]=c[3]+1;
            else if(a[j]==4)c[4]=c[4]+1;
            else if(a[j]==5)c[5]=c[5]+1;
            else if(a[j]==6)c[6]=c[6]+1;
            else if(a[j]==7)c[7]=c[7]+1;
            else if(a[j]==8)c[8]=c[8]+1;
            else if(a[j]==9)c[9]=c[9]+1;
           }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8],c[9]);
    }
    return 0;
}
