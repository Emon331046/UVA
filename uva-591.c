//box of bricks
#include<stdio.h>
int main()
{
    int a[101],n,i,c,d,count,sum;
    c=0;
    while( scanf("%d",&n)  )
    {
        if(n==0)break;
        sum=0;
        count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        d=sum/n;
        for(i=0; i<n; i++)
        {
            if(a[i]>d)count=count + a[i]-d;
        }

        c=c+1;
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",c,count);
    }
    return 0;
}
