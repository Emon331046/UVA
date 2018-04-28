#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct lucky
{
    int a;
    char c;
};
int main()
{
    char w;
    int test,l,i,j,k,b,r,temp;
    char s[10000];
    while(gets(s))
    {
        struct lucky id[52];
        for(i=0; i<52; i++)id[i].a=0;
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(isalpha(s[i]))
            {
                if(isupper(s[i]))
                {
                    j=s[i]-'A';
                    id[j].a=id[j].a+1;
                    id[j].c=s[i];
                }
                if(islower(s[i])){
                    j=s[i]-'a'+26;
                    id[j].a=id[j].a+1;
                    id[j].c=s[i];
                }
            }
        }
        for(b=0; b<52; b++)for(r=0; r<52-1; r++)
            {
                if(id[r].a<id[r+1].a)
                {
                    temp=id[r].a;
                    w=id[r].c;
                    id[r].a=id[r+1].a;
                    id[r].c=id[r+1].c;
                    id[r+1].a=temp;
                    id[r+1].c=w;
                }

            }
        for(k=0; k<52; k++)if(id[k].a!=0)
            {
                if(id[0].a==id[k].a)printf("%c",id[k].c);
            }
        printf(" %d\n",id[0].a);
    }

    return 0;
}
