#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,f,b[100];
    char a[100];
    while(scanf("%s",a)!=EOF){
        l=strlen(a);
        f=0;
        j=0;
        for(i=0;i<l;i++){
            if((f!=1)&&(a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V')){

                b[j]=1;
                f=1;
                j++;
            }
            else if(f!=2&&(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='X'||a[i]=='S'||a[i]=='Z')){
                f=2;
                b[j]=2;
                j++;
            }
            else if(f!=3&&(a[i]=='D'||a[i]=='T')){
                f=3;
                b[j]=3;
                j++;
            }
            else if(f!=4&&(a[i]=='L')){
                b[j]=4;
                f=4;
                j++;
            }
            else if(f!=5&&(a[i]=='M'||a[i]=='N')){
                b[j]=5;
                f=5;
                j++;
            }
            else if(f!=6&&(a[i]=='R')){
                b[j]=6;
                f=6;
                j++;
            }
            else if(a[i]=='A'||a[i]=='E'||a[i]=='U'||a[i]=='I'||a[i]=='O'||a[i]=='H'||a[i]=='W'||a[i]=='Y')f=0;
        }
        for(k=0;k<j;k++)printf("%d",b[k]);
        printf("\n");
    }
    return 0;
}
