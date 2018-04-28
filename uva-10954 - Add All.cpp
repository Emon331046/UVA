#include<bits/stdc++.h>
using namespace std;
 struct compare
 {
   bool operator()(const int& l, const int& r)
   {
       return l > r;
   }
 };
int main()
{
    int n;
    while(scanf("%d",&n)){
            if(n==0)break;
        priority_queue<int,vector<int>, compare>mpq;
        int i,m,sum;
        long long cost=0;
        for(i=0;i<n;i++){
            scanf("%d",&m);
                mpq.push(m);
        }
        while(mpq.size()>1){
            sum=mpq.top();
            mpq.pop();
            sum=sum+mpq.top();
            mpq.pop();
            mpq.push(sum);
            cost=cost+sum;
        }
        printf("%lld\n",cost);
    }
    return 0;
}

