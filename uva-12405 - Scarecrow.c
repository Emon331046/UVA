#include<stdio.h>
int main()
{
    int test,t=0;
    scanf("%d",&test);
    while(test--){
            t=t+1;
            int n;
            char c[1000];
    scanf("%d%*c",&n);
    scanf("%s",c);
    int sum=0,i;
    for(i=0;i<n;i++){
        if(c[i]=='.'){
            sum=sum+1;;
            i=i+2;
        }
    }
    printf("Case %d: %d\n",t,sum);
    }
    return 0;
}
