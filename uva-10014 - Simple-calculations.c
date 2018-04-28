#include<stdio.h>
#include<math.h>
int main()
{
    int test,n,t=0,i;
    double sum,l,g,c[10000],a;
    scanf("%d",&test);
    while(test--){
            t=t+1;

        scanf("%d",&n);
        scanf("%lf%lf",&l,&g);
        a=(l+g)/2;
        sum=0;
        for(i=0;i<n;i++){
            scanf("%lf",&c[i]);
            sum=c[i]+sum;
        }
        sum=a-sum;
        printf("%.2lf\n",sum);
         printf("\n");
    }
    return 0;
}
