#include<stdio.h>
#include<string.h>
int main()
{
    int test,i,l,male,female;
    char a[1000];
    scanf("%d%*c",&test);
    while(test--){
        gets(a);
        l=strlen(a);
        if(l<3)printf("+\n");
        else if(l>4)printf("?\n");
        else if(a[0]=='9'&&a[l-1]=='4')printf("*\n");
        else if((a[0]=='1'||a[0]=='4'||a[0]=='7')&&a[l-1]=='5')printf("-\n");
        else printf("?\n");
    }
    return 0;
}
