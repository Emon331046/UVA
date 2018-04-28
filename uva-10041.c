#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int test,t=0,n,temp,i,d,sum,a[40000],j;
    scanf("%d",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        scanf("%d",&n);
        sum=0;
        for(i=0; i<n; i++)scanf("%d",&a[i]);
        for(i=0; i<n; i++)for(j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
            d=n/2;
        for(i=0;i<n;i++){
            sum=sum+ abs(a[d]-a[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
