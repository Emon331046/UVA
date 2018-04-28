#include<stdio.h>
int main()
{
    int a,b,c,sum,d,e,f,g;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)){
        if(a==0&&b==0&&c==0&&d==0)break;
        if(a>=b) e=(a-b)*9;
        else e=(40+a-b)*9;
        if(c>=b)f=(c-b)*9;
        else f=(40-b+c)*9;
        if(c>=d)g=(c-d)*9;
        else g=(40+c-d)*9;
        sum=e+f+g+1080;
        printf("%d\n",sum);
    }
    return 0;
}

