
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
    int test,l,i,j,k,b,r,temp,rikta,count=1;
    int c[20005]={0};
    char s[10000];
    for(i=2; i<=sqrt(2001); i++)
    {
        if(c[i]==0)
        {
            for(j=2; (i*j)<=2001; j++)c[i*j]=1;
        }
    }
    scanf("%d%*c",&test);
    while(test--)
    {
        gets(s);
        struct lucky id[62];
        for(i=0; i<62; i++)id[i].a=0;
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(isdigit(s[i])){
                j=s[i]-'0';
                    id[j].a=id[j].a+1;
                    id[j].c=s[i];
            }
            else if(isalpha(s[i]))
            {
                if(isupper(s[i]))
                {
                    j=s[i]-'A'+10;
                    id[j].a=id[j].a+1;
                    id[j].c=s[i];
                }
                if(islower(s[i])){
                    j=s[i]-'a'+36;
                    id[j].a=id[j].a+1;
                    id[j].c=s[i];
                }
            }
        }
        int flag=0;
        printf("Case %d: ",count++);
        for(k=0; k<62; k++)if(id[k].a!=0)
            {
                rikta=id[k].a;
                if(id[k].a>1&&c[rikta]==0){printf("%c",id[k].c);
                flag=1;}
            }
            if(flag==0)printf("empty");
        printf("\n");
    }

    return 0;
}
