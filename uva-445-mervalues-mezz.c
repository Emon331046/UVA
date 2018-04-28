#include<stdio.h>
#include<string.h>
int main()
{
  int l,i,j,r;
  char s[100];
  while(gets(s)){
    l=strlen(s);
        for(i=0;i<l;i++){
            if(s[i]=='!')printf("\n");
            else {
                r=0;
                while(s[i]>='0'&&s[i]<='9'){
                    r=r+s[i]-'0';
                    i++;
                }
                if(s[i]=='b')s[i]=' ';
                    for(j=0;j<r;j++)printf("%c",s[i]);
            }
        }
        printf("\n");
  }
  return 0;
}

