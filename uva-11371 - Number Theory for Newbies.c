#include<stdio.h>
int main()
{
    long long n,max,min;
    while(scanf("%lld",&n)!=EOF)
    {
        long long a[50],d,temp,m,i,j,k,l;
        temp=n;
        d=0;
        while(temp!=0)
        {
            a[d]=temp%10;
            temp=temp/10;

            d++;
        }
        for(k=0;k<d;k++)for(l=0;l<d-1;l++){
            if(a[l]>a[l+1]){
                m=a[l];
                a[l]=a[l+1];
                a[l+1]=m;
            }
        }
        max=0;
        min=0;
        long long flag,mess,tess,tlag;
        flag=0;
        for(i=d-1; i>=0; i--)
        {
            max=(max*10)+a[i];
            if(a[i]==0&&flag==0)
            {
                mess=a[i+1];
                tess=i+1;
                flag=1;
            }
        }
        if(flag==1)
        {
            a[tess]=0;
            a[0]=mess;
        }
        for(i=0; i<d; i++)
        {
            min=(min*10)+a[i];
        }
        m=max-min;
        tlag=m/9;
        printf("%lld - %lld = %lld = 9 * %lld\n",max,min,m,tlag);
    }
    return 0;
}
