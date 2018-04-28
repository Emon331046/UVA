#include<stdio.h>
int main()
{
    int a[100000],b[100000],n,q,i,j,k,count,temp,t=0,l;
    while(scanf("%d%*c%d",&n,&q)){
        if(n==0&&q==0)break;
        t=t+1;
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        for(j=0;j<q;j++)scanf("%d",&b[j]);
        printf("CASE# %d:\n",t);
        for(k=0;k<n;k++)for(l=0;l<n-1;l++){
            if(a[l]>a[l+1]){
                temp=a[l];
                a[l]=a[l+1];
                a[l+1]=temp;
            }
        }
        for(i=0;i<q;i++){
             count=0;
            for(j=0;j<n;j++){
                count=count+1;
                if(b[i]==a[j])break;
            }
           if(j==n)printf("%d not found\n",b[i]);
           else printf("%d found at %d\n",b[i],count);
        }
    }
    return 0;
}
