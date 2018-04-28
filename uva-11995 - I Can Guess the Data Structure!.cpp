#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        stack<int>ms;
        queue<int>mq;
        priority_queue<int>mpq;
        int t,m,sf=1,qf=1,pqf=1;
        for(int i=0;i<n;i++){
            scanf("%d%*c%d",&t,&m);
            if(t==1){
                ms.push(m);
                mq.push(m);
                mpq.push(m);
            }
            else {
                if(sf==1&&!ms.empty()&&ms.top()==m)ms.pop();
                else sf=0;

                if(qf==1&&!mq.empty()&&mq.front()==m)mq.pop();
                else qf=0;

                if(pqf==1&&!mpq.empty()&&mpq.top()==m)mpq.pop();
                else pqf=0;
            }
        }
        int sum=pqf+qf+sf;
        if(sum==0)printf("impossible\n");
        else if(sum==2||sum==3)printf("not sure\n");
        else {
            if(sf==1)printf("stack\n");
            else if(qf==1)printf("queue\n");
            else if(pqf==1)printf("priority queue\n");
        }
    }
    return 0;
}
