//f91
#include<stdio.h>
int f91( int n )
{
    if(n<=100) return f91(f91(n+11));
    if(n>=101) return n-10;
}

int main()
{
    int ans,n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        ans=f91( n );
        printf("f91(%d) = %d\n",n,ans);
    }
    return 0;
}
