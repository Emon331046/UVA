#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int l,m,i,j,k,t=0,test;
    char a[100000],b[100000];
    scanf("%d%*c",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        gets(a);
        l=strlen(a);
        m=sqrt(l);
        k=0;
        if(m*m==l){
            for(i=0;i<m;i++){
                for(j=i;j<l;j=j+m){
                    b[k]=a[j];
                    k=k+1;
                }
            }
            b[k]='\0';
            printf("%s\n",b);
        }
        else printf("INVALID\n");
    }
}
