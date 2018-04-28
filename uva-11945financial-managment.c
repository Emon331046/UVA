#include<stdio.h>
#include<ctype.h>
int main()
{
    double s[13],sum,m,temp;
    int k,i,test,f,t=1;
    scanf("%d",&test);
    while(test--){
            sum=0;
    f=0;
    for(i=0;i<12;i++){
        scanf("%lf",&s[i]);
        sum=sum+s[i];
    }
    m=sum/12;
    temp=m;
    k=m;
    f=k/1000;
    temp=temp-(f*1000);
    printf("%d $",t++);
    if(f!=0)printf("%d,",f);
    printf("%.2lf\n",temp);
    }
    return 0;
}

