#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long ans,i,k,j,count,n,r[32];
    char c[32],temp;
    while(scanf("%lld",&n)){
        if(n==0) break;
        count=0;
       for(i=0;n!=0;i++){
                r[i]=n%2;
            if(r[i]==1){
                    c[i]='1';
                    count=count+1;
            }
            else c[i]='0';
            n=n/2;
        }
        for(j=0,k=i-1;j<(i)/2;j++,k--){
        temp=c[k];
        c[k]=c[j];
        c[j]=temp;
        }
        c[i]='\0';
        printf("The parity of %s is %lld (mod 2).\n",c,count);
    }
    return 0;
}
