#include<stdio.h>
int main()
{
    int a[30000],test,t=0,temp,n,sum,i,j;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        if(i>0){
            j=i;
            while(j>0&&a[j]>a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                j--;
            }
        }
        }
          sum=0;
        for(i=2;i<n;i=i+3){
            sum=sum+a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
