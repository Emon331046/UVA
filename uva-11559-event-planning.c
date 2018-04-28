#include<stdio.h>
int main()
{
    int n,B,w,h,temp,d,sum;
    while(scanf("%d%d%d%d",&n,&B,&h,&w)!=EOF)
    {
        d=0;
        int s[100],i,j,mmm,f,a[100][100],b[100];
        for(i=0; i<h; i++)
        {
            scanf("%d",&s[i]);
            f=0;
            for(j=0; j<w; j++)
            {
                scanf("%d",&a[i][j]);
                if(n<=a[i][j])
                {
                    f=1;
                }
            }
            if(f==1)
            {
                b[d]=s[i];
                d++;
            }
        }
        if(d==0)printf("stay home\n");
        else
        {
            temp=0;
            sum=b[0];
            for(i=0; i<d; i++)
            {
                if(sum>b[i])
                {
                    temp=i;
                    sum=b[i];
                }
            }
            mmm=sum*n;
            if(mmm<=B)printf("%d\n",mmm);
            else printf("stay home\n");
        }
    }
return 0;
}
