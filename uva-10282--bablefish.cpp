#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,c,f;
    map< string,string>mymap;
    getline(cin,s);
    while(s != "")
    {
        stringstream sd(s);
        sd >> s >> f;
        mymap[f]=s;
        getline(cin,s);
    }
    while(cin>>s)
    {
        map<string,string>::const_iterator it=mymap.find(s);
        if( it==mymap.end() )cout<<"eh\n";
        else cout<< it->second<< '\n';
    }
    return 0;
}
