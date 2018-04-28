#include<stdio.h>
#include<math.h>
int prime(int p){
int i,k;
k=sqrt(p);
for(i=2;i<=k;i++){
    if(p%i==0)break;
}
if(i==k+1)return 1;
else return 0;
}
int main()
{
   int i,j,k,test,t,s,sum,count,the,l,u;
   scanf("%d",&test);
   while(test--){
    scanf("%d%*c%d",&l,&u);
    int a[100000]={0};
    j=0;
    t=0;
    for(i=l;i<=u;i++){
        if(t!=0&&prime(i)){
            a[j]=i-t;
            j=j+1;
            t=i;
        }
        else if(prime(i))t=i;
    }
    sum=0;
    the=a[0];
    for(k=0;k<j-1;k++){
        count=0;
        if(a[k]!=0){
        for(i=0;i<j;i++){
            if(a[i]==a[k]&&k!=i){
                a[i]=0;
                count=count+1;
            }
        }
        if(count>=sum){
            if(count==sum)s=0;
        else s=count;
            sum=count;
            the=a[k];

        }
        }
    }
    if(the==0)printf("No jumping champion\n");
    else if(s>=1||(j==1&&a[0]!=0))printf("The jumping champion is %d\n",the);
    else printf("No jumping champion\n");
   }
   return 0;
}
