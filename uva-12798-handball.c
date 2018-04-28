#include<stdio.h>
int main()
{
    int a[105][105],i,j,count,n,m;
    while( scanf("%d%d",&n,&m)!=EOF ){
        for(i=0;i<n;i++)for(j=0;j<m;j++)scanf("%d",&a[i][j]);
        count=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)if(a[i][j]==0)break;
            if(j==m)count=count+1;
        }
        printf("%d\n",count);
    }
    return 0;
}
