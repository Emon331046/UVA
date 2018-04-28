#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[10000],c;
    long long i,j,k,l,f,r,n;
    long long a[1000];
    double d;
   while(scanf("%s %c %lld",&s,&c,&n)!=EOF){
        r=0;
        l=strlen(s);
        for(i=0;i<l;i++){
            r=r*10+s[i]-'0';
            a[i]=r/n;
            r=r%n;
        }
        if(c=='/'){
                f=0;
            for(i=0;i<l;i++){
                if(a[i]==0&&f==0){
                continue;
                }
                else {
                        f=1;
                    printf("%lld",a[i]);
                }
        }
        if(f==0)printf("0");
        printf("\n");
        }
        else printf("%lld\n",r);
    }
   return 0;
}
