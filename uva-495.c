#include<stdio.h>
long fibo(long n)
{
    if(n<3) return 1;
    return fibo(n-1) + fibo(n-2) ;
}
int main()
{
    long sum,n;
    while( 1 )
    {
        scanf("%ld",&n);
        sum = fibo(n);
        printf("The Fibonacci number for %ld is %ld\n",n,sum);
    }
    return 0;
}
