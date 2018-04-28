#include<stdio.h>
int main()
{
   long int a,b,temp,ans;
    while(scanf("%ld%ld",&a,&b)==2){
            if(a>b){temp=a;
            a=b;
            b=temp;}
            ans=b-a;
            printf("%ld\n",ans);}
            return 0;
}

