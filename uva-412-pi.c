#include<stdio.h>
#include<string.h>
#include<math.h>
int gsd(int x,int y)
{
    int temp,r;
    if(x<y){
        temp=x;
        x=y;
        y=temp;
    }
    while(1){
        if(x%y==0)break;
        r=x%y;
        x=y;
        y=r;
    }
    return y;
}
int main()
{
    int test,t=0,i,j;
    int id[100],count,sum;
    double d;
    while(scanf("%d%*c",&test)){
        t=t+1;
          if(test==0)break;
        for(i=0;i<test;i++)scanf("%d",&id[i]);
        sum=0;
        count=0;
        for(i=0;i<test-1;i++)for(j=i+1;j<test;j++){
            if(gsd(id[i],id[j])==1){
                count=count+1;
            }
            sum=sum+1;
        }
       if(count!=0){d=(double)(6*sum)/count;
       d=sqrt(d);
       printf("%.6lf\n",d);}
       else printf("No estimate for this data set.\n");
    }
    return 0;
}

