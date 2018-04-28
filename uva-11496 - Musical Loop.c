
#include<stdio.h>
#include<ctype.h>
int main()
{
    int n,i,j,l;
    while(scanf("%d",&l)){
            if(l==0)break;
        int a[10000],flag=2;
        for(i=0;i<l;i++)scanf("%d",&a[i]);
        n=0;
        int p=0;
        for(i=0;i<l-1;i++){
            j=i+1;
            if(a[i]>a[j]&&flag!=0){
                flag=0;
                n=n+1;
            }
            else if(a[i]<a[j]&&flag!=1){
                flag=1;
                p=p+1;
            }
        }
        if(n>p)p=n;
        p=p*2;
        printf("%d\n",p);
    }
    return 0;
}
