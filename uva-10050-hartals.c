#include<stdio.h>
int main()
{
    int test,parties,days,ph[100000],count,t=0,i,m,j,k;
    scanf("%d",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        scanf("%d",&days);
        scanf("%d",&parties);
        int hartals[100000]={0};
        for(i=0; i<parties; i++)
            scanf("%d",&ph[i]);
        k=0;
        m=0;
        for(i=0;i<parties;i++)
        {
            for(j=1; ; j++)
            {
                m=j*ph[i];
                if(m>days)break;
                if(((m+1)%7!=0)&&(m%7!=0))
                {
                    hartals[k]=m;

                    k=k+1;
                }
            }
        }
        for(i=0; i<k-1; i++)for(j=i+1; j<k; j++)
            {
                if(hartals[i]==hartals[j])hartals[j]=0;
            }
        count=0;
        for(i=0; i<k; i++)
        {
            if(hartals[i]!=0)count=count+1;

        }
        printf("%d\n",count);
    }
    return 0;
}
