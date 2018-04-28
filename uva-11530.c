//sms typing
#include<stdio.h>
#include<string.h>
int main()
{

    int test,count,r,l,i,t=0;
    char a[10001];
    scanf("%d%*c",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
            gets(a);
            l=strlen(a);
            count=0;
            for(i=0; i<l; i++)
            {
                r=0;
                if(a[i]==' ')count=count+1;
                else if(a[i]=='z'||a[i]=='s')count=count+4;
                else if(a[i]<'s')
                {
                    r=a[i]-96;
                    r=r%3;
                    if(r==0)count=count+3;
                    else count=count+r;
                }
                else
                {
                    r=a[i]-97;
                    r=r%3;
                    if(r==0)count=count+3;
                    else count=count+r;
                }
        }
        printf("Case #%d: %d\n",t,count);
    }
    return 0;
}
