#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    int c,i,l;
    while( scanf("%s",&a) ){
            l=strlen(a);
        if(l==1 && a[0]=='0')break;
        c=0;
        for(i=0;i<l;i++){
            c= a[i]-'0' + c*10 ;

            c=c%11;
        }
    if(c==0)printf("%s is a multiple of 11.\n",a);
    else printf("%s is not a multiple of 11.\n",a);
    }
    return 0;
}
