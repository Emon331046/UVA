#include<bits/stdc++.h>
int main()
{
    int n,r,i,j;
    while(scanf("%d%d",&n,&r)!=EOF){
        int a[100000];
        if(n==r){for(i=0;i<r;i++)scanf("%d",&a[i]);
                printf("*\n");}
        else {
            std::queue<int>m;
            for(i=0;i<r;i++)scanf("%d",&a[i]);
            std::sort(a,a+r);
            for(i=0;i<r;i++)m.push(a[i]);
            for(i=1;i<=n;i++){
                if(i==m.front())m.pop();
                else {
                    printf("%d ",i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
