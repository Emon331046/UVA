#include<bits/stdc++.h>
int main()
{
    int n;
    while(scanf("%d",&n)){
        if(n==0)break;
        int i;
        std::queue<int>a,b;
        for(i=1;i<=n;i++)a.push(i);
        while(a.size()!=1){
            b.push(a.front());
            a.pop();
            a.push(a.front());
            a.pop();
        }
        printf("Discarded cards:");
        while(!b.empty()){
            printf(" %d",b.front());
            if(b.size()!=1)printf(",");
            b.pop();
        }
printf("\nRemaining card: %d\n",a.front());
    }
    return 0;
}
