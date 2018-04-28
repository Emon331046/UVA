#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int l,n;
    while(scanf("%d%d",&n,&l)!=EOF){
        if(n<l)printf("%d\n",l);
        else printf("%d\n",n);
    }
    return 0;
}
