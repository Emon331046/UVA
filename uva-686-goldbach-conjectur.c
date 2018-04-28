#include<stdio.h>
#include<math.h>
int prime(int n){
   int t,k;
    t=sqrt(n);
    for(k=2;k<=t;k++){
        if(n%k==0)break;
    }
    if(k==t+1) return 1;
    else return 0;
}
int main()
{
    int a,b,i,h,j,f,g,c,count=0;
    while(scanf("%d",&a)){
        if(a==0)break;
        h=a/2;
        count=0;
        for(i=2;i<=h;i++){
            j=a-i;
            f=prime(i);
            g=prime(j);
            if(f==1&&g==1){
                b=i;
                c=j;
               count=count+1;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
