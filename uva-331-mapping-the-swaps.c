#include<stdio.h>
int main()
{
    int a[10],test,i,f,j,k,t=0,temp,count;
    while(scanf("%d",&test))
    {
        t=t+1;
        if(test==0)break;

        for(i=0; i<test; i++)scanf("%d",&a[i]);
         count=0;
        for(k=1; k<=test-1; k++)
        {
            j=1;
            temp=a[0];
            f=0;
            printf("%dc\n",count);
            while(temp>a[j]&&j<5)
            {
                a[j-1]=a[j];
                j++;
                count=count+1;

            }
            a[j-1]=temp;
        }
        printf("There are %d swap maps for input data set %d.\n",count,t);
    }
    return 0;
}
