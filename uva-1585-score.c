#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum,count,t=0,l,test;
    char ch[100];
    scanf("%d%*c",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        gets(ch);
        l=strlen(ch);
        sum=0;
        count=0;
        for(i=0; i<l; i++)
        {
            if(ch[i]=='X')count=0;
            if(ch[i]=='O')
            {
                count=count+1;
                sum=count+sum;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
