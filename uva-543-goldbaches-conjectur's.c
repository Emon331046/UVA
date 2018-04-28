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
    int a,b,i,h,j,f,g,c;
    while(scanf("%d",&a)){
        if(a==0)break;
        h=a/2;
        for(i=2;i<=h;i++){
            j=a-i;
            f=prime(i);
            g=prime(j);
            if(f==1&&g==1){
                b=i;
                c=j;
                break;
            }
        }
        printf("%d = %d + %d\n",a,b,c);
    }
    return 0;
}
