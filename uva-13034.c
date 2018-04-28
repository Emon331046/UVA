//solving everything
#include<stdio.h>
int main()
{
    int j=0,a[13],i,test,t=0;
    scanf("%d",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        for(i=0; i<13; i++) scanf("%d",&a[i]);
        for(i=0; i<13; i++)
        {
            if(a[i]==0)break;
        }
        if(i!=13)printf("Set #%d: No\n",++j);
        else printf("Set #%d: Yes\n",++j);
    }
    return 0;
}
