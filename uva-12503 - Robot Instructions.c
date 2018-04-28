#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--){
            int n,a[10000]={0},j,i,f;
            char c[1000][1000];
        scanf("%d%*c",&n);
    for(i=1;i<=n;i++){
        gets(c[i]);
        if(c[i][0]=='L')a[i]=-1;
        else if(c[i][0]=='R')a[i]=1;
        else {
           int l=strlen(c[i]);
            f=0;
            for(j=8;j<l;j++){
                f=f*10+(c[i][j]-'0');
            }
            a[i]=a[f];
        }
    }
    int sum=0;
    for(i=0;i<=n;i++)sum=sum+a[i];
    printf("%d\n",sum);
    }
    return 0;
}
