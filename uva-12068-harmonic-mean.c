#include<stdio.h>
int main()
{
    int test,t=0,k,i,n;
    int a[10],s;
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%d",&n);
        s=1;
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s=s*a[i];
        }
        int d=0;
        for(i=0;i<n;i++){
                d=d+(s/a[i]);
        }
        s=s*n;
        for(i=2;i<=s;i++){
            if(s%i==0&&d%i==0){
                s=s/i;
                d=d/i;
                i=i-1;
            }
        }
        if(d==0)d=1;
        printf("Case %d: %d/%d\n",t,s,d);
    }
}
