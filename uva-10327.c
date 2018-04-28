#include<stdio.h>
int main()
{
    int t=0,test,i,j,temp,count,a[1000];
    while(scanf("%d",&test)==1)
    {
            count=0;
            for(i=0; i<test; i++)scanf("%d",&a[i]);
            for(j=0; j<test; j++)
            {
                for(i=0; i<test-1; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        count=count + 1;
                        temp=a[i+1];
                        a[i+1]=a[i];
                        a[i]=temp;
                    }
                }
            }
            printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
