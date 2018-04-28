#include<stdio.h>
int main()
{
    int m,n,test,t=0,a,b;
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%d%d",&m,&n);
        if( m<n || (m+n)%2==1 )printf("impossible\n");
        else {a=(m+n)/2;
        b=(m-n)/2;
        printf("%d %d\n",a,b);
        }
    }
    return 0;
}
