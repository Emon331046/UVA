#include<stdio.h>
#include<math.h>
int prime(int a)
{
    int i,j;
    j=sqrt(a);
    if(j*j==a)return 0;
    else {for(i=2;i<=j;i++){
        if(a%i==0)break;
    }
    if(a!=1&&i==j+1)return 1;
    else return 0;
    }

}
int main()
{
    int t1,t2,t=0,test,i,a,j,s,count;
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        count=0;
        scanf("%d%d",&t1,&t2);
        for(i=t1;i<=t2;i++){
            if(prime(i)){
                    a=i;
            s=0;
                while(a!=0){
        s=s+(a%10);
        a=a/10;
    }
    if(prime(s))count=count+1;
            }
            else continue;
        }
        printf("%d\n",count);
    }
    return 0;
}
