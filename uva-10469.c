//to carry or not to carry
#include<stdio.h>
#include<math.h>
int main()
{
    long long m,n,i,j,sum;
    while( scanf("%lld%lld",&m,&n)!=EOF ){

            i=31;
            sum=0;
            int a[ ]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},b[ ]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
       while(m!=0 || n!=0){
        a[i]=m%2;
        b[i]=n%2;
        m=m/2;
        n=n/2;
        i=i-1;

       }
       int c[ ]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
      for(i=31;i>=0;i--){
        if(a[i]==1 && b[i]==1)c[i]=0;
        else c[i]=b[i]+a[i];
      }

      for(i=31,j=0;i>=0;i--,j++)sum= c[i]*pow(2,j) + sum;
      printf("%lld\n",sum);
    }
return 0;
}
