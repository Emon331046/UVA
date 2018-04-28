#include<stdio.h>
int main()
{
    int n,p,q,i,count,k,s,t=0,test,a[100];
    scanf("%d",&test);
    while(test--)
    {
        t=t+1;
        scanf("%d%*c%d%*c%d",&n,&p,&q);
        for(i=0; i<n; i++)
        {
            if(i<n-1)scanf("%d%*c",&a[i]);
            else scanf("%d",&a[i]);
        }
        s=0;
        count=0;
        if(n<p)k=n;
        else k=p;
        for(i=0; i<k; i++){
            s=s+a[i];
            if(s<=q)count=count+1;
            if(s>q)break;
        }
        printf("Case %d: %d\n",t,count);
    }
    return 0;
}
