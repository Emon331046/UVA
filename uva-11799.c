//horror dash
#include<stdio.h>
int main()
{
   long int i,j,a[101],test,k,l,m,temp;
    scanf("%ld",&test);
    k=l=0;
    while(1){
        k=k+1;
        if(k>test)break;
       scanf("%ld",&m);
        for(i=0;i<m;i++)scanf("%ld",&a[i]);
        for(j=0;j<m;j++)for(i=0;i<m-1;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
     printf("Case %ld: %ld\n",++l,a[m-1]);
    }
    return 0;
}
