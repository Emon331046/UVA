#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum;
    while(scanf("%d",&n) && n!=0){
            sum=0;
        for(i=1;i<=n;i++){
            sum=sum + pow(i,2);
        }
        printf("%d\n",sum);
    }
    return 0;
}
