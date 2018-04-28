#include<stdio.h>
#include<string.h>
int main()
{
    int l[1000],count=0,i,j,d=0;
    char s[1000][1000];
    while(gets(s[d])){
        l[d]=strlen(s[d]);
        if(l[d]>count)count=l[d];
        d++;
    }
    for(i=1;i<=count;i++){
        for(j=d-1;j>=0;j--){
            if(l[j]>=i)printf("%c",s[j][i-1]);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
