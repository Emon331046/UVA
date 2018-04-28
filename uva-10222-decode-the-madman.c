#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100000];
    int i,l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
           a[i]= tolower(a[i]);
        if(a[i]=='e')a[i]='q';
        if(a[i]=='r')a[i]='w';
        if(a[i]=='t')a[i]='e';
        if(a[i]=='y')a[i]='r';
        if(a[i]=='u')a[i]='t';
        if(a[i]=='i')a[i]='y';
        if(a[i]=='o')a[i]='u';
        if(a[i]=='p')a[i]='i';
        if(a[i]=='[')a[i]='o';
        if(a[i]=='d')a[i]='a';
        if(a[i]=='f')a[i]='s';
        if(a[i]=='g')a[i]='d';
        if(a[i]=='h')a[i]='f';
        if(a[i]=='j')a[i]='g';
        if(a[i]=='k')a[i]='h';
        if(a[i]=='l')a[i]='j';
        if(a[i]==';')a[i]='k';
        if(a[i]=='\'')a[i]='l';
        if(a[i]=='c')a[i]='z';
        if(a[i]=='v')a[i]='x';
        if(a[i]=='b')a[i]='c';
        if(a[i]=='n')a[i]='v';
        if(a[i]=='m')a[i]='b';
        if(a[i]==',')a[i]='n';
        if(a[i]=='.')a[i]='m';
        if(a[i]==']')a[i]='p';
    }
    printf("%s\n",a);
    return 0;
}
