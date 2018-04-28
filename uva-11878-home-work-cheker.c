#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,l,d,count;
    count=0;
    char c,e,s[10];
    while(scanf("%d%c%d%c",&a,&c,&b,&e)!=EOF)
    {
        scanf("%s",s);
        l=strlen(s);

        if(s[0]!='?')
        {
            d=0;
            for(i=0; i<l; i++)d=d*10+s[i]-'0';
            if(c=='+')
            {
                if((a+b)==d)count=count+1;
            }
            else
            {
                if((a-b)==d)count=count+1;
            }
        }

    }
    printf("%d\n",count);
    return 0;
}
