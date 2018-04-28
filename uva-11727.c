//cost cuuting
#include<stdio.h>
int main()
{
    long int i,k,temp,j,a[4],test;
    scanf("%ld",&test);
    j=0;
    while(1)
    {
        j=j+1;
        if(j>test)break;
        for(i=0; i<3; i++)scanf("%ld",&a[i]);
        for(k=0; k<2; k++)for(i=0; i<2; i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        printf("Case %ld: %ld\n",j,a[1]);

    }
    return 0;
}
