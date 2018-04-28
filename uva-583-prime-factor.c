#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j,n,m,d,k;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        int a[100];
        m=n;
        i=2;
        d=0;
        printf("%d = ",n);
        if(m<0)
        {
            printf("-1 x ");
            m=abs(m);
        }
        k=sqrt(m);
        while(i<=k)
        {
            if(m%i==0)
            {
                a[d]=i;
                m=m/i;
                i=i-1;
                d=d+1;
            }
            i=i+1;
        }
        if(m!=1){a[d]=m;
        d++;}
        for(i=0; i<d; i++)
        {

            printf("%d",a[i]);
                        if(i!=d-1)printf(" x ");
        }
        printf("\n");
    }
    return 0;
}
