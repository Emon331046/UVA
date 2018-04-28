#include<stdio.h>
#include<math.h>
int square(int n){
int k=sqrt(n);
if(k*k==n)return 1;
else return 0;
}
int hanoi(int a[],int i,int len,int peg)
{
    if(i>=peg)return len;

   else if(a[i]==0){
        a[i]=len;
              return hanoi(a,0,len+1,peg);

    }
    else if(a[i]!=0&&square((a[i]+len))==1){
        a[i]=len;
        len=len+1;
              return hanoi(a,0,len,peg);

    }
    else if(a[i]!=0||square(a[i]+len)==0){
            i=i+1;
            return hanoi(a,i,len,peg);
    }
}
int main()
{
    int test,peg,n,i;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&peg);
        int a[100]={0};
        n=hanoi(a,0,1,peg)-1;
        printf("%d\n",n);
    }
    return 0;
}

