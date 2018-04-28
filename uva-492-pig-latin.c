#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char ch[10000000],a[10000000];
int main()
{

    int j,f,i,l,g,temp;
    while(gets(ch))
    {
        j=0;
        l=strlen(ch);
        f=0;
        g=0;
        for(i=0; i<l; i++)
        {
            if(!isalpha(ch[i]))
            {
                if(g==1)
                {
                    a[j]=temp;
                    j=j+1;
                }
                if(isalpha(ch[i-1]))
                {
                a[j]='a';
                j=j+1;
                a[j]='y';
                j=j+1;
                }
                a[j]=ch[i];
                j=j+1;
                f=0;
                g=0;
            }
            else
            {
               if(f==0&&(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'))
                {
                    a[j]=ch[i];
                    j=j+1;
                    f=1;
                }
                else if(f==0&&(ch[i]!='a'||ch[i]!='e'||ch[i]!='i'||ch[i]!='o'||ch[i]!='u'||ch[i]!='A'||ch[i]!='E'||ch[i]!='I'||ch[i]!='O'||ch[i]!='U'))
                {
                    temp=ch[i];
                    f=1;
                    g=1;
                }
                else
                {
                    a[j]=ch[i];
                    j=j+1;
                    f=1;
                }
            }
        }
        if(isalpha(ch[l-1])){
                if(g==1){a[j]=temp;
                j=j+1;}
            a[j]='a';
            j=j+1;
            a[j]='y';
            j=j+1;
        }
        a[j]='\0';
        printf("%s\n",a);
    }
    return 0;
}
