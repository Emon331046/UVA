#include<stdio.h>
int main()
{
    int n,k,m,count;
    while( scanf("%d%d",&n,&k)==2 ){
            count=0;
        m=n;
        while(1){
                if(m<k)break;
        m=m-k;
        m=m+1;
        count=count+1;
        }
        count=count+n;
        printf("%d\n",count);
    }
    return 0;
}
