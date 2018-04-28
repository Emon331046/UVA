#include<stdio.h>
#include<math.h>
struct lucky
{
    int s;
    int b;
    int c;
};
int main()
{
    int test;
    int a[50001]= {0};
    struct lucky id[50001];
    scanf("%d",&test);
    int i,j,k,m;
    for(i=0; i<=sqrt(50000); i++)
    {
        if((i*i)+(i*i)+(i*i)>50000)break;
        for(j=i; j<=sqrt(50000); j++)
        {
            if((i*i)+(j*j)+(j*j)>50000)
            {
                break;
            }
            for(k=j; k<=sqrt(50000); k++)
            {
                int sum=(i*i)+(j*j)+(k*k);
                if(sum>50000)
                {
                    break;
                }
                if(a[sum]==0)
                {
                    a[sum]=1;
                    id[sum].s=i;
                    id[sum].b=j;
                    id[sum].c=k;
                }
            }
        }
    }
    while(test--)
    {
        scanf("%d",&m);
        if(a[m]==1)printf("%d %d %d\n",id[m].s,id[m].b,id[m].c);
        else printf("-1\n");
    }
    return 0;
}

