//searching for nessy
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,test,r,p,m,s,t=0;
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%d%d",&n,&m);
        r=n%3;
        n=n-r;
        p=m%3;
        m=m-p;
        s=n*m;
        s = s/9 ;
        printf("%d\n",s);
    }
    return 0;
}
