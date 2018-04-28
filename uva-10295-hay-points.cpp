#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,c,f;
    map< string,int >mymap;
    int n,m;
    cin>>m>>n;
    while(m--)
    {
        int d,t;
        cin>>s>>d;
        mymap[s]=d;
    }
    while(n--){
            int sum=0;
        while(cin>>c){
                if(c==".")break;

            map<string,int>::const_iterator it;
            it=mymap.find(c);
            if(it!=mymap.end()){
                    sum=sum+it->second;

        }
    }
        cout<<sum<<'\n';
    }
    return 0;
}
