#include<stdio.h>
#include<string.h>
int main()
{
    int s[250]={0},i,r,temp,j,f,l,sum=0;
    char a[151];
    while(scanf("%s",a)){
        l=strlen(a);
        if(l==1&&a[0]=='0')break;
        if(l>sum)sum=l;
        int b[250]={0};
        for(i=l-1,j=0;i>=0;i--,j++){
            b[j]=a[i]-'0';
        }

        r=0;
        for(i=0;i<250;i++){
            temp=s[i];
            s[i]=(s[i]+b[i]+r)%10;
            r=(temp+b[i]+r)/10;
        }
    }
    f=0;
    for(i=249;i>=0;i--){
        if(f==0&&s[i]==0)continue;
        else {f=1;    printf("%d",s[i]);}
    }
    printf("\n");
    return 0;
}
