#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l,k,o,p,s,m,j;
    char ch[150],temp;
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        scanf("%s",ch);
        l=strlen(ch);
        m=l/n;
        for(i=0;i<n;i++){
                o=i*m;
                s=o+m-1;
                p=o+(m/2);
            for(j=o,k=0;j<p;j++,k++){
                temp=ch[j];
                ch[j]=ch[s-k];
                ch[s-k]=temp;
            }
        }
        printf("%s\n",ch);
    }
    return 0;
}

