#include<bits/stdc++.h>
int a[2000000];
int main()
{
    int n,m,i;
    while(scanf("%d",&n)){
            if(n==0)break;
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        std::sort(a,a+n);
            for(i=0;i<n;i++){
                    if(i!=n-1)printf("%d ",a[i]);
            else printf("%d\n",a[i]);
    }
    }
    return 0;
}
