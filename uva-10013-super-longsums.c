#include<stdio.h>
int a[1000000]={0},b[1000000]={0},s[1000000]={0};
int main()
{
    int i,j,d,test,r,m,flag,t=0;
    scanf("%d",&test);
    while(1){
        t++;
        if(t>test)break;
        scanf("%d",&m);
        for(i=0;i<m;i++)scanf("%d%d",&a[i],&b[i]);
        d=0;
        r=0;
        for(i=m-1;i>=0;i--){
            s[d]=(a[i]+b[i]+r)%10;
            r=(a[i]+b[i]+r)/10;
            d++;
        }
        s[d]=r;
        if(t!=1)printf("\n");
        flag=0;
        for(i=d;i>=0;i--){
            if(s[i]!=0||flag==1){printf("%d",s[i]);
            flag=1;}
        }
       printf("\n");
    }
    return 0;
}
