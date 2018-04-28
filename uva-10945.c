#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[10000],b[10000];
    int i,j,l,t,k;
    while(gets(a)){
        l=strlen(a);
        if(l==4&&a[0]=='D'&&a[1]=='O'&&a[2]=='N'&&a[3]=='E')break;
        j=0;
        for(i=0;i<l;i++){
            if(isalpha(a[i])){
                b[j]=toupper(a[i]);
                j=j+1;
            }
        }
        b[j]='\0';
        printf("%d %s ",j,b);
        for(i=0,k=j-1;i<j/2;i++,k--){
            if(b[i]!=b[k])break;
        }
        if(i==(j/2))printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
    return 0;
}
