#include<stdio.h>
int main()
{
    double t1,t2,f,a,c[3],g,d,temp;
    int test,t=0,i,j;
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(test<t)break;
        scanf("%lf%lf%lf%lf%lf%lf%lf",&t1,&t2,&f,&a,&c[0],&c[1],&c[2]);
        for(i=0;i<3;i++)for(j=0;j<2;j++){
            if(c[j]>c[j+1]){
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
       d=(c[1]+c[2])/2;
       g=t1+t2+f+a+d;
       if(g>=90)printf("Case %d: A\n",t);
       else  if(g>=80)printf("Case %d: B\n",t);
       else  if(g>=70)printf("Case %d: C\n",t);
       else  if(g>=60)printf("Case %d: D\n",t);
       else printf("Case %d: F\n",t);
    }
    return 0;
}
