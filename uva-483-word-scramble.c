#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000],temp;
    int i,j,k,l,m,n;
    while(gets(s)){
        m=0;
        l=strlen(s);
        for(i=0;i<=l;i++){
            if(s[i]==' '||s[i]=='\0'){
                k=i;
                for(j=m,n=k-1;j<(k+m)/2;j++,n--){
                    temp=s[j];
                    s[j]=s[n];
                    s[n]=temp;
                }
                m=k+1;
            }
        }
        printf("%s\n",s);
    }
    return 0;
}
