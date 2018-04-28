#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum,i,l;
    char c[10000];
    while(gets(c))
    {
        sum=0;
        l=strlen(c);
        for(i=0; i<l; i++)
        {
            if(c[i]>='0'&&c[i]<='9')n=1+c[i]-'0';
            else if(c[i]>='A'&&c[i]<='Z')n=11+c[i]-'A';
            else if(c[i]>='a'&&c[i]<='z')n=37+c[i]-'a';
            if(n>sum)sum=n;
        }
        printf("%d\n",sum);
    }
    return 0;
}
