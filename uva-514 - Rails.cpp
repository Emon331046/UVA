#include<bits/stdc++.h>
int main()
{
    int test;
    while(scanf("%d",&test))
    {
        if(test==0)break;
        int m,i,j;
        while(scanf("%d",&m))
        {
            if(m==0)break;
            std::queue<int>c;
            c.push(m);
            for(i=1; i<test; i++)
            {
                scanf("%d",&m);
                c.push(m);
            }
            std::stack<int>a,b;
            for(i=test;i>0;i--)a.push(i);
            while(1){
                if(!a.empty()&&a.top()==c.front()){
                    c.pop();
                    a.pop();
                }
                else if(!b.empty()&&b.top()==c.front()){
                    c.pop();
                    b.pop();
                }

                else if(!a.empty()){
                    b.push(a.top());
                    a.pop();
                }
                else break;
            }
            if(c.empty())printf("Yes\n");
            else printf("No\n");
        }
        printf("\n");
    }
    return 0;
}
