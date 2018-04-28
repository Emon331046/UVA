#include<stdio.h>
int main()
{
    int r,n,count,k,i=0;
    while(scanf("%d%d",&r,&n) )
    {
        count=0;
        if(r==0 && n==0)break;
        else  if(r<n)printf("Case %d: 0\n",++i);
        else
        {
            r=r-n;
            count=r/n;
            k=r%n;
            if(k!=0)count=count+1;
            if(count>26)printf("Case %d: impossible\n",++i);
            else printf("Case %d: %d\n",++i,count);
        }
    }
    return 0;
}
