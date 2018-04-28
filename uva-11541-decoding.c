#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100],c;
    long long i,j,test,t=0,l,r;
    scanf("%lld%*c",&test);
    while(test--){
        t=t+1;
        gets(a);
        l=strlen(a);
        printf("Case %d: ",t);
        for(i=0;i<l; ){
            if(a[i]>='A'&&a[i]<='Z'){
                c=a[i];
                i=i+1;
                r=0;
                while(a[i]>='0'&&a[i]<='9'){
                    r=(r*10)+a[i]-'0';
                    i=i+1;
                }
                for(j=0;j<r;j++)printf("%c",c);
            }
        }
        printf("\n");
    }
    return 0;
}
