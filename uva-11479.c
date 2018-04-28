//is the esiest problem?
#include<stdio.h>
int main()
{
    long long i,j,a[4],test,k,temp;
    scanf("%lld",&test);
    k=0;
    while(1){
        k=k+1;
        if(k>test)break;
        for(i=0;i<3;i++)scanf("%lld",&a[i]);
        for(j=0;j<2;j++)for(i=0;i<2;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        if( a[0]+a[1]<=a[2] || a[0]==0 || a[1]==0 || a[2]==0 ){
            printf("Case %lld: Invalid\n",k);
        }
       else {
        if(a[0]==a[1] && a[1]==a[2])printf("Case %lld: Equilateral\n",k);
        else if(a[0]==a[1] || a[1]==a[2])printf("Case %lld: Isosceles\n",k);
        else printf("Case %lld: Scalene\n",k);
       }
    }
    return 0;
}
