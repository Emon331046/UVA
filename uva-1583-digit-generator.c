#include <stdio.h>
#include <math.h>
int main ()
{
   int test,n;
   scanf("%d",&test);
   while(test--){
    scanf("%d",&n);
    int temp,d,k,start,i,sum,a;
    d=0;
    temp=n;
    while(temp!=0){
        temp=temp/10;
        d++;
    }
    k=9*d;
    start=n-k;

    for(i=start;i<n;i++){
        a=i;
        sum=i;
        while(a!=0){
            sum=sum+(a%10);
            a=a/10;
        }
        if(sum==n)break;
    }
        if(i!=n)printf("%d\n",i);
        else printf("0\n");
   }
   return(0);
}
