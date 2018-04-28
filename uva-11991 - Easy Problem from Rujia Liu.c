#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF){
            int a[100000],i,count,k,v,j;
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        s[a[i]]=s[a[i]]+1;
        }
    for(j=0;j<m;j++){
        scanf("%d%d",&k,&v);
        count=0;
        for(i=0;i<n;i++){
            if(a[i]==v)count++;
            if(count==k){
                printf("%d\n",i+1);
                break;
            }
        }
        if(count<k)printf("0\n");
    }
    }
    return 0;
}
