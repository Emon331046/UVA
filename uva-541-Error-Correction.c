#include<stdio.h>
int main()
{
    int n,i,j,k,d,raw,collumn;
    while(scanf("%d",&n)){
        if(n==0)break;
        collumn=0;
        raw=0;
        int s[500][500],r[500]={0},c[500]={0};
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d",&s[i][j]);
                r[i]=r[i]+s[i][j];
            }
            if(r[i]%2==1){
                raw=raw+1;
                d=i+1;
            }
        }
        for(j=0;j<n;j++){
            for(i=0;i<n;i++)c[j]=c[j]+s[i][j];
            if(c[j]%2==1){
                collumn=collumn+1;
                k=j+1;
            }
        }
        if(collumn==0&&raw==0)printf("OK\n");
        else if(collumn=1&&raw==1)printf("Change bit (%d,%d)\n",d,k);
        else printf("Corrupt\n");
    }
    return 0;
}
