#include<stdio.h>
int main()
{
    long long test,m,i,j,temp,w,k;
    scanf("%lld",&test);
    while(test--)
    {
        long long a[100000];
        scanf("%lld%lld",&m,&w);
        for(i=0; i<m; i++){
                scanf("%lld",&a[i]);
                if(i!=0&&a[i]<a[i-1]){
                    temp=a[i];
                    k=i;
                    while(k>0&&a[k]<a[k-1]){
                        temp=a[k];
                        a[k]=a[k-1];
                        a[k-1]=temp;
                        k--;
                    }
                }
        }
        for(i=0;i<m;i++)printf("%d",a[i]);
    }
    return 0;
}
