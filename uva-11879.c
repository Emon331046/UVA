//multiple of 17
#include<stdio.h>
#include<string.h>
int main()
{

    int i,j,k,c,l;
    char s[102];
    while( scanf("%s",s) ){
    l=strlen(s);
    if(l==1 && s[0]=='0')break;
    c=0;
    for(i=0;i<l;i++){
        c=(s[i]-'0') + c*10;
        c=c%17;
    }
    if(c==0)printf("1\n");
    else printf("0\n");
   }
   return 0;
}
