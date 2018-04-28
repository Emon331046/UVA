#include<stdio.h>
int main()
{
    int i,j,a[10000],temp,n,c,d,m,l=0,k;
    while( scanf("%d",&n)!=EOF ){
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
       // if(l)printf("\n");
        k=0;
        //l=1;
        for(j=0;j<n-1;j++)for(i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(j=n;j>=0;j--){for(i=0;i<n;i++){
            if(i!=j){
                if(a[i]+a[j]==m){
                        if(a[i]-a[j]<=k){c=a[i];
                        d=a[j];}


                }
            }
        }
        }
        printf("Peter should buy books whose prices are %d and %d.\n",c,d);
        printf("\n");
    }
    return 0;
}
