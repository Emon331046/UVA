#include<stdio.h>
int main()
{
    unsigned long long i,j,d,r,n,k,count,temp;
    while(scanf("%llu",&n))
    {
        if(n==0)break;
        temp=n;
        unsigned long long a[11]={0};
        r=(n*10)/9;
        j=((r/10)-1)*10;
        d=((r/10)+1)*10;
        k=0;
        for(i=j; i<=d; i++)
        {
            count=(i-(i/10));
            if(count==temp)
            {

                a[k]=i;
                k++;
            }
        }
       for(i=0;i<k;i++){
        printf("%llu",a[i]);
        if(i!=k-1)printf(" ");
       }
       printf("\n");
    }
    return 0;
}
