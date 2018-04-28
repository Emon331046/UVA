//hello world
#include<stdio.h>
int main()
{
    int n,i,j,count;
    i=0;
    while( scanf("%d",&n) && n>=0 ){
            j=1;
    count=0;
        while(n>1){j=2*j;
        count++;
        if(2*j>n){
                if((j-n)<0)count++;
        break;}
    }
    printf("Case %d: %d\n",++i,count);
    }

    return 0;
}
