#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,l,count,i,a[3000],s[3000];
    while(scanf("%d",&n)==1 )
    {
        count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);

        }
        for(i=0; i<n-1; i++)s[i]=abs(a[i]-a[i+1]);

        for(l=1; l<n; l++)for(i=0; i<n-1; i++)
            {
                if(l==s[i])
                {
                    count=count+1;
                    break;
                }

            }
        if(count==n-1)printf("Jolly\n");
        else if(count<n-1)printf("Not jolly\n");
    }
    return 0;
}
