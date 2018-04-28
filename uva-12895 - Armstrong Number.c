#include<stdio.h>
#include<math.h>
int main()
{
    long long test,n,temp,d;
    scanf("%lld",&test);
    while(test--){
        scanf("%lld",&n);
        double sum;
        int a[100],i;
        temp=n;
        d=0;
        while(temp!=0){
            a[d]=temp%10;
            temp=temp/10;
            d++;
        }
        sum=0;
        for(i=0;i<d;i++)sum=sum+pow(a[i],d);
        if(sum==n)printf("Armstrong\n");
        else printf("Not Armstrong\n");
    }
    return 0;
}
