#include<stdio.h>
#include<string.h>
int main()
{
    int i,test,t=0,la,lb;
    char a[50],b[50];
    scanf("%d%*c",&test);
      while(1){
        t=t+1;
        if(t>test)break;
        gets(a);
        gets(b);
        la=strlen(a);
        lb=strlen(b);
        if(la!=lb)printf("No\n");
        else {
            for(i=0;i<la;i++){
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='u'||a[i]=='o'){
                     if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='u'||b[i]=='o')continue;
                     else break;
                }
                else {
                    if(a[i]!=b[i])break;
                }
            }
            if(i==la)printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
