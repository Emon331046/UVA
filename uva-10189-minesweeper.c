#include<stdio.h>
#include<string.h>
int main()
{
    int c[105][105],i,j,k,count,f,w,q,g,l,m,n,t=0;
    char a[105][105];
    while( scanf("%d%d%*c",&m,&n) ){
            t=t+1;
        if(m==0 && n==0)break;
        for(i=0;i<m;i++){for(j=0;j<n;j++)scanf("%c",&a[i][j]);
        scanf("%*c");
        }
        for(i=0;i<m;i++)for(j=0;j<n;j++){

            f=1;
            g=1;
            w=1;
            q=1;
            if(a[i][j]=='.'){
                    count=0;
                   if(i==0)f=0;
                   if(j==0)g=0;
                   if(i==m-1)q=0;
                   if(j==n-1)w=0;
                for(k=i-f;k<=i+q;k++){
                    for(l=j-g;l<=j+w;l++)
                        if(a[k][l]=='*')count=count+1;

                }

            }
            c[i][j]=count;
        }
        if(t!=1)printf("\n");
        printf("Field #%d:\n",t);
        for(i=0;i<m;i++){for(j=0;j<n;j++){
        if(a[i][j]=='.')printf("%d",c[i][j]);
        else if(a[i][j]=='*')printf("*");
        }
        printf("\n");
        }
    }
    return 0;
}
