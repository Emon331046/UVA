#include<bits/stdc++.h>
using namespace std;
class comp
{
public:
        bool operator()(int a,int b)
    {
        return a>b;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    priority_queue<long long,vector<long long>,comp>soldier,goose;
    int n,m,i;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)break;
        priority_queue<long long,vector<long long>,comp>soldier,goose;
        for(i=0; i<n; i++)
        {
            int nn;
            cin>>nn;
            goose.push(nn);
        }
        for(i=0; i<m; i++)
        {
            int nn;
            cin>>nn;
            //cout<<"gkh "<<nn<<endl;
            soldier.push(nn);
        }
        int flag=0,ans=0;
        if(n>m)cout<<"Loowater is doomed!"<<endl;
        else
        {
            int tmp=n+m;
            for(i=0; i<=tmp; i++)
            {
                if(goose.empty())
                {
                    flag=1;
                    break;
                }
                if(soldier.empty()&&!goose.empty())
                {
                    flag=0;
                    break;
                }
                if(soldier.top()>=goose.top())
                {
                    ans+=soldier.top();
                    soldier.pop();
                    goose.pop();
                }
                else soldier.pop();
            }
            if(flag==1)cout<<ans<<endl;
            else cout<<"Loowater is doomed!"<<endl;
        }
    }
    return 0;
}
