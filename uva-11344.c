//the huge one(uva11344)
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001];

    int b[100],test,n,j,r,l,k,t=0;

    scanf("%d",&test);

    while(1)
    {
        t=t+1;
        if(t>test)break;
        scanf("%s",&a);
        l=strlen(a);
        scanf("%d",&n);
        for(j=0; j<n; j++)scanf("%d",&b[j]);
        for(j=0; j<n; j++)
        {
            r=0;
            for(k=0; k<l; k++)
            {
                r = a[k]-'0'+(r*10);
                r = r%b[j];
            }
            if(r!=0)break;
        }
        if(j==n)printf("%s - Wonderful.\n",a);
        else printf("%s - Simple.\n",a);
    }
    return 0;
}
