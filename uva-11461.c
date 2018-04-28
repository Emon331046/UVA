//square number
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,p,j,k,t,count;
    while( scanf("%d%d",&m,&n) && n!=0 && m!=0){
            if(m>n){
                t=m;
                m=n;
                n=t;
            }
            count=0;
        j=sqrt(n);
        k=sqrt(m);
        for(i=k;i<=j;i++){
           p=pow(i,2);
           if(p>=m&&p<=n)count++;
        }
    printf("%d\n",count);
    }
    return 0;
}
