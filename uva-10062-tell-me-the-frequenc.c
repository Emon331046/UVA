#include<stdio.h>
#include<string.h>
struct id
{
    char w;
    int c;
};
int main()
{
    int n,d=0,flag,i,j,l;
    struct id count[2][200];
    char s[10000],f[10000];
    while(gets(s)&&gets(f))
    {
        int temp;
        for(i=0; i<150; i++)count[0][i].c=0;
        for(i=0; i<150; i++)count[1][i].c=0;
        n=strlen(s);
        l=strlen(f);
        for(j=0; j<n; j++)
        {
            flag=s[j];
            count[0][flag].w=s[j];
            count[0][flag].c++;
        }
        for(j=0; j<l; j++)
        {
            flag=f[j];
            count[1][flag].w=f[j];
            count[1][flag].c++;
        }
        for(i=0; i<150; i++)
        {
            if(count[0][i].c>count[1][i].c)temp=count[1][i].c;
            else temp=count[0][i].c;
            if(temp!=0)
            {
                for(j=0; j<temp; j++)printf("%c",count[0][i].w);
            }
        }
        printf("\n");
    }
    return 0;
}

