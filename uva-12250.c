//language detection
#include<stdio.h>
#include<string.h>
int main()
{
    int l,t=0;
    char n[15],a[]="HELLO",b[]="HOLA",c[]="HALLO",d[]="CIAO",e[]="BONJOUR",f[]="ZDRAVSTVUJTE";
    while(1){
        t=t+1;
        scanf("%s",n);
        l=strlen(n);
        if(l==1 && n[0]=='#')break;
        if(strcmp(n,a)==0)printf("Case %d: ENGLISH\n",t);
        else if(strcmp(n,b)==0)printf("Case %d: SPANISH\n",t);
        else if(strcmp(n,c)==0)printf("Case %d: GERMAN\n",t);
        else if(strcmp(n,d)==0)printf("Case %d: ITALIAN\n",t);
        else if(strcmp(n,e)==0)printf("Case %d: FRENCH\n",t);
        else if(strcmp(n,f)==0)printf("Case %d: RUSSIAN\n",t);
        else printf("Case %d: UNKNOWN\n",t);
    }
    return 0;
}
