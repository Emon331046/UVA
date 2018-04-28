//above average
#include<stdio.h>
int main()
{
    int n,a[2000],abv,test,t=0,sum,i,c;
    double p;
    char ch='%';
    scanf("%d",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        scanf("%d",&n);
        sum=0;

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        abv=sum/n;
        c=0;
        for(i=0; i<n; i++)
        {
           if(abv<a[i])c=c+1;
        }
        p=(double)(100*c)/n;
        printf("%.3lf%c\n",p,ch);
    }
    return 0;
}
