#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,n,m,test;
    char a[10];
    scanf("%d%*c",&test);
    while(test--){
        gets(a);
        n=8;
        m=0;
        if((a[0]=='N')||(a[0]=='S')||(a[0]=='A'&&a[1]=='P')||(a[0]=='J'&&a[1]=='U'&&a[2]=='N')){
            if((a[4]=='S'&&a[5]=='A')||(a[4]=='T'&&a[5]=='H'))m=1;
            if(a[4]=='F')m=2;
        }
        else if(a[0]=='F'){
            n=8;
            m=0;
        }
        else {
            n=8;
            if((a[4]=='S'&&a[5]=='A')||a[4]=='W')m=1;
            if(a[4]=='F'||(a[4]=='T'&&a[5]=='H'))m=2;
        }
        printf("%d\n",(m+n));
    }
    return 0;
}
