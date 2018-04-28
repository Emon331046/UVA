#include<bits/stdc++.h>
#define bug printf("chq")
int main()
{
    int test,i,j,sum1,sum2,l,m,n;
    scanf("%d",&test);
    while(test--){
        scanf("%d%d",&l,&m);
        l=l*100;
        char s[10];
        std::queue<int>left,right;
        for(i=0;i<m;i++){
            scanf("%d%*c%s",&n,s);
            if(s[0]=='l')left.push(n);
            else if(s[0]=='r')right.push(n);
        }
        i=0;
        while(!left.empty()||!right.empty()){
            if(i%2==0){
                sum1=0;
                while(!left.empty()){
                    if(l<(sum1+left.front()))break;
                    sum1=sum1+left.front();
                    left.pop();
                }
                i++;
            }
           else if(i%2==1){
                sum2=0;
                while(!right.empty()){
                    if(l<sum2+right.front())break;
                    sum2=sum2+right.front();
                    right.pop();
                }
                i++;
            }

        }
        printf("%d\n",i);
    }
    return 0;
}
