#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,t=1;
    cin>>test;
    while(test--)
    {
        int i,f=0,flag=0,mod=0,ans;
        char ch;
        for(i=1;i<=25;i++)
        {
            cin>>ch;
            if(ch=='|'&&f==0)
            {
                mod=i;
                f=1;
            }
            if(ch=='<')
            {
                ans=i%5;
                if(ans==0)ans=5;
                if(mod<ans)flag=1;
                if(mod==0)flag=0;
            }

            if(ch=='>')
            {
                ans=i%5;
                if(ans==0)ans=5;
                if(mod>ans||mod==0)flag=1;
            }
        }
        if(flag==1)printf("Case %d: Thik Ball\n",t++);
        else printf("Case %d: No Ball\n",t++);
    }
    return 0;
}
