#include<stdio.h>
#include<math.h>
int main()
{
    long long n,m,r,d,i,j,temp;
    while( scanf("%lld",&n)==1 ){
        d=sqrt(n);
        for(i=2;i<=d;i++){
            if(n%i==0)break;
        }
        if(i==d+1){
            temp=n;
            r=0;
            while(temp!=0){
                r=(r*10)+(temp%10);
                temp=temp/10;
            }
            m=sqrt(r);
            for(j=2;j<=m;j++){
               if(r%j==0)break;
            }
            if(j==(m+1) && r!=n)printf("%lld is emirp.\n",n);
            else printf("%lld is prime.\n",n);
        }
        else printf("%lld is not prime.\n",n);
    }
   return 0;
}
