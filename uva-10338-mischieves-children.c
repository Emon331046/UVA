#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long ans,sum;
    unsigned long long i,j,l,test,kk=0;
    scanf("%llu%*c",&test);
    char a[25];
    while(1){
        kk=kk+1;
        if(kk>test)break;
        scanf("%s",a);
        unsigned long long c[50]={0},t;
        l=strlen(a);
        ans=1;
        for(i=1;i<=l;i++)ans=ans*i;
        for(i=0;i<l;i++){
            if(a[i]=='A')c[0]=c[0]+1;
            else if(a[i]=='B')c[1]=c[1]+1;
            else if(a[i]=='C')c[2]=c[2]+1;
            else if(a[i]=='D')c[3]=c[3]+1;
            else if(a[i]=='E')c[4]=c[4]+1;
            else if(a[i]=='F')c[5]=c[5]+1;
            else if(a[i]=='G')c[6]=c[6]+1;
            else if(a[i]=='H')c[7]=c[7]+1;
            else if(a[i]=='I')c[8]=c[8]+1;
            else if(a[i]=='J')c[9]=c[9]+1;
            else if(a[i]=='K')c[10]=c[10]+1;
            else if(a[i]=='L')c[11]=c[11]+1;
            else if(a[i]=='M')c[12]=c[12]+1;
            else if(a[i]=='N')c[13]=c[13]+1;
            else if(a[i]=='O')c[14]=c[14]+1;
            else if(a[i]=='P')c[15]=c[15]+1;
            else if(a[i]=='Q')c[16]=c[16]+1;
            else if(a[i]=='R')c[17]=c[17]+1;
            else if(a[i]=='S')c[18]=c[18]+1;
            else if(a[i]=='T')c[19]=c[19]+1;
            else if(a[i]=='U')c[20]=c[20]+1;
            else if(a[i]=='V')c[21]=c[21]+1;
            else if(a[i]=='W')c[22]=c[22]+1;
            else if(a[i]=='X')c[23]=c[23]+1;
            else if(a[i]=='Y')c[24]=c[24]+1;
            else if(a[i]=='Z')c[25]=c[25]+1;
        }
        sum=1;
        for(i=0;i<26;i++){
            t=1;
            for(j=1;j<=c[i];j++)t=t*j;
            sum=sum*t;
        }
        ans=ans/sum;
        printf("Data set %llu: %llu\n",kk,ans);
    }
    return 0;
}
