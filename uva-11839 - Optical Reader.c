
#include<stdio.h>
int main()
{
    int test;
    while(scanf("%d",&test)==1)
    {
        if(test==0)break;
        int d,i,a[20],c,j;
        for(j=0; j<test; j++)
        {
            d=0;
            for(i=0; i<5; i++)
            {
                scanf("%d",&a[i]);
                if(a[i]<=127)
                {
                    c=i;
                    d++;
                }
            }
            if(d==1)printf("%c\n",'A'+c);
            else printf("*\n");
        }
    }
    return 0;
}
