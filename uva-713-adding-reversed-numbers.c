#include<stdio.h>
int main()
{
    int i,j,t,w=0,k,l,m,n,test,r,f,a[200];
    char b[200],c[200];
    scanf("%d",&test);
    while(1){
            w=w+1;
    if(w>test)break;
            scanf("%s%*c%s",&b,&c);
            k=strlen(b);
            l=strlen(c);
            r=0;
            if(k>l)t=k;
            else t=l;
            for(i=0;i<=t;i++){
                if(i>=k)m=0;
                else m=b[i]-'0';
                if(i>=l)n=0;
                else n=c[i]-'0';
                a[i]=(r+n+m)%10;
                r=(r+m+n)/10;
            }
            f=0;
            for(i=0;i<=t;i++){
                if(f==0&&a[i]==0)continue;
                if(i==t&&a[i]==0)break;
                else {
                        printf("%d",a[i]);
                    f=1;
                }
            }
            printf("\n");
            }
}
