#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,flag,mirror,count;
    char s[10000];
    while(scanf("%s",s)==1){
        l=strlen(s);
        flag=0;
        mirror=0;
        for(i=0,j=l-1;i<l/2;i++,j--){
    if(s[i]!=s[j])break;
   }
   if(i==l/2)flag=1;
      for(i=0,j=l-1;i<=l/2;i++,j--){
        if(s[i]=='0')s[i]='O';
        if(s[j]=='0')s[j]='O';
        if(s[i]=='B'||s[i]=='C'||s[i]=='D'||s[i]=='F'||s[i]=='G'||s[i]=='K'||s[i]=='N'||s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='4'||s[i]=='6'||s[i]=='7'||s[i]=='9')break;
        if(s[j]=='B'||s[j]=='C'||s[j]=='D'||s[j]=='F'||s[j]=='G'||s[j]=='K'||s[j]=='N'||s[j]=='P'||s[j]=='Q'||s[j]=='R'||s[j]=='4'||s[j]=='6'||s[j]=='7'||s[j]=='9')break;
        if(s[i]=='A'||s[i]=='H'||s[i]=='I'||s[i]=='T'||s[i]=='U'||s[i]=='V'||s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='1'||s[i]=='8'||s[i]=='O'){
            if(s[i]!=s[j])break;
        }
        if(s[i]=='E'&&s[j]!='3')break;
        if(s[i]=='J'&&s[j]!='L')break;
        if(s[i]=='L'&&s[j]!='J')break;
        if(s[i]=='S'&&s[j]!='2')break;
        if(s[i]=='Z'&&s[j]!='5')break;
        if(s[i]=='2'&&s[j]!='S')break;
        if(s[i]=='3'&&s[j]!='E')break;
        if(s[i]=='5'&&s[j]!='Z')break;
      }
      if(i==(l/2)+1)mirror=1;
      if(mirror==1&&flag==1)printf("%s -- is a mirrored palindrome.\n",s);
      else if(mirror==1)printf("%s -- is a mirrored string.\n",s);
      else if(flag==1)printf("%s -- is a regular palindrome.\n",s);
      else printf("%s -- is not a palindrome.\n",s);
      printf("\n");
    }
    return 0;
}
