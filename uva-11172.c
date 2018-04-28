#include<stdio.h>
int main()
{
   long long int s[15],t[15];
   int i,n;
    while(scanf("%d",&n)==1){
            for(i=0;i<n;i++)scanf("%lld%lld",&s[i],&t[i]);
            for(i=0;i<n;i++){if(s[i]>t[i])printf(">\n");
            else if(s[i]<t[i])printf("<\n");
            else printf("=\n");
            }}

            return 0;
}


