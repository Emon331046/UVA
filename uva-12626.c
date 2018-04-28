//i love pizza
#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,test,k,t=0;
    char p[1000];
    scanf("%d%*c",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        gets(p);
        int a[ ]={0,0,0,0,0,0};
        l=strlen(p);
        for(i=0;i<l;i++){
            if(p[i]=='A')a[0]=a[0]+1;
            else if(p[i]=='G')a[1]=a[1]+1;
            else if(p[i]=='I')a[2]=a[2]+1;
            else if(p[i]=='M')a[3]=a[3]+1;
            else if(p[i]=='R')a[4]=a[4]+1;
            else if(p[i]=='T')a[5]=a[5]+1;
            else continue;
        }
        k=a[0]/3;
        a[4]=a[4]/2;
        for(i=0;i<6;i++){
            if(k>a[i])k=a[i];
        }
        printf("%d\n",k);
    }
    return 0;
}
