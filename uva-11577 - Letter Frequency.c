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
    scanf("%d%*c",&test);
    while(test--)
    {
        struct lucky id[26];
        for(i=0; i<26; i++)id[i].a=0;
        gets(s);
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(isalpha(s[i]))
            {
                s[i]=tolower(s[i]);
                j=s[i]-'a';
                id[j].a=id[j].a+1;
                id[j].c=s[i];
            }
        }
        for(b=0; b<26; b++)for(r=0; r<26-1; r++)
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
        for(k=0; k<26; k++)if(id[k].a!=0)
            {
                if(id[0].a==id[k].a)printf("%c",id[k].c);
            }
            printf("\n");
    }

    return 0;
}
