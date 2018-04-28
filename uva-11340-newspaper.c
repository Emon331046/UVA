#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct lucky
{
    int cost;
    int count;
    char c;
};
int main()
{
    struct lucky id[130];
    int test,l,i,j;
    char s[10000];
    scanf("%d%*c",&test);
    while(test--)
    {
        for(i=0; i<130; i++)
        {
            id[i].cost=0;
            id[i].count=0;
        }
        int n,m;
    int test,l,i,j;
    char s[10000];
        scanf("%d%*c",&n);
        while(n--)
        {
            char ch;
            scanf("%c%*c",&ch);
            int hh;
            scanf("%d%*c",&hh);
            j=ch;
            id[j].cost=hh;
            id[j].c=ch;
        }
        scanf("%d%*c",&m);
        while(m--)
        {
            gets(s);
            l=strlen(s);
            for(i=0; i<l; i++)
            {
                j=s[i];
                id[j].count++;
                id[j].c=s[i];
            }
        }
        int sum=0;
        for(i=0; i<130; i++)
        {
            sum=sum+(id[i].cost*id[i].count);
        }
        double ss;
        ss=(double)sum/100;
        printf("%.2lf$\n",ss);
    }
    return 0;
}
