#include<stdio.h>
int main()
{
    int n,k,j,t,count,temp,i,a[51];

    while(scanf("%d",&n)==1){/test case input/
        for(t=1;t<=n;t++){scanf("%d",&k);
        count=0;
        for(i=0;i<k;i++)scanf("%d",&a[i]);
        for(i=0;i<k-1;i++){
            for(j=0;j<k-i-1;j++){
                if(a[j]>a[j+1]){

                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    count++;
                }
            }
        }
     printf("optimal train swapping takes %d swaps.\n",count);
    }
    }
    return 0;
}
