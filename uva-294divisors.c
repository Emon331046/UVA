#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long test,t=0,sum,p,j,r,i,m,l,u,count,d;
    scanf("%llu",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%llu%llu",&l,&u);
        p=0;
        sum=0;
        for(i=l;i<=u;i++){
            m=sqrt(i);
            count=0;
            for(j=1;j<=m;j++){
                r=i%j;
                if(r==0){
                    if(j*j!=i) count=count+2;
                    else count=count+1;
                }
            }
            if(sum<count){
                sum=count;
                p=i;
            }
        }
        printf("Between %llu and %llu, %llu has a maximum of %llu divisors.\n",l,u,p,sum);
    }
    return 0;
}
