#include<stdio.h>
int main()
{
    long long a[4],temp,i,j,test,t=0;
    scanf("%lld",&test);
    while( 1 )
    {
        t=t+1;
        if(t>test)break;
        scanf("%lld%lld%lld%lld",&a[0],&a[1],&a[2],&a[3]);
        for(j=0; j<4; j++)for(i=0; i<3; i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        if(a[0]+a[1]+a[2]>a[3])
        {
            if(a[0]==a[1] && a[1]==a[2] &&  a[2]==a[3])printf("square\n");
            else if(a[0]==a[1] && a[2]==a[3])printf("rectangle\n");
            else printf("quadrangle\n");
        }
        else printf("banana\n");
    }
    return 0;
}
