#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>

using namespace std;

#define sf1(x) scanf("%d",&x)
#define sfch(ch) scanf("%c",&ch)
#define sfs(s) scanf("%s",&s)
#define pfc(x) printf("Case %d: ",x)
#define pfcn(x) printf("Case %d:\n",x)
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define pf4(x,y,z,m) printf("%d %d %d %d\n",x,y,z,m)
#define mod 1000000007
#define ll long long
#define llu unsigned long long
#define pii pair<int,int>
#define PI acos(-1.00)
#define pb push_back
#define ppb pop_back
vector<string>v;
map<string,int>mp;
int main()
{
    ios::sync_with_stdio(false);

    int tst,tt=0;
    string s,ss;
    cin>>tst;
    getline(cin,ss);
    getline(cin,ss);
    while(tst--)
    {
        if(tt!=0)
        {
            cout<<endl;
        }
        tt=1;
        while(getline(cin,s))
        {
            if(s=="")break;
            //cout<<s<<endl;
            v.pb(s);
        }
        string final_string;
        int mx=-1;
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v.size(); j++)
            {
                if(i==j)continue;
                //cout<<i<<' '<<j<<"fffgg"<<endl;
                string crnt;
                crnt=v[i]+v[j];
                //cout<<crnt<<endl;
                mp[crnt]+=1;
                if(mp[crnt]>=mx)
                {
                //cout<<mp[crnt]<<' '<<crnt<<endl;
                    mx=mp[crnt];
                   // cout<<crnt<<" "<<mx<<endl;
                    final_string=crnt;
                }
            }
        }
        cout<<final_string<<endl;
        mp.clear();
        v.clear();
    }
    return 0;
}

