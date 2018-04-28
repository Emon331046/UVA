#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,t=0,test,s=0;
    char ch[7];
    scanf("%d",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        scanf("%s",&ch);
        if(ch[0]=='d')
        {
            scanf("%d",&a);
            s=s+a;
        }

        else if(ch[0]=='r')
        {
            printf("%d\n",s);
        }

    }
    return 0;
}
