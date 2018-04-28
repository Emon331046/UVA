//zapping
#include<stdio.h>
int main()
{
    int ans,a,b,sum;
    while(scanf("%d%d",&a,&b) )
    {
        if(a==-1 && b==-1)break;
        if(a==b)ans=0;
        else
        {
            if(a>b){ans=a-b;
            sum=100-a+b;
            }
            else {ans=b-a;
            sum=100-b+a;
            }

        }
        if(sum>ans)
        printf("%d\n",ans);
        else printf("%d\n",sum);
    }
    return 0;
}
