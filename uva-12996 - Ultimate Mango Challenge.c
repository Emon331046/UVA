#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a[100],v[100],i,test,t=1,limit,n;
    scanf("%d",&test);
    while(test--){
        scanf("%d%d",&n,&limit);
        int sum=0,flag=0;
        for(i=0;i<n;i++){scanf("%d",&a[i]);
        sum=sum+a[i];}
        for(i=0;i<n;i++){
            scanf("%d",&v[i]);
            if(a[i]>v[i])flag=1;
        }
        if(sum<=limit&&flag==0)printf("Case %d: Yes\n",t++);
        else printf("Case %d: No\n",t++);
    }
    return 0;
}

