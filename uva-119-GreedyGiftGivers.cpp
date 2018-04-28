#include<bits/stdc++.h>
using namespace std;
#define bug cout<<"chq";
int main()
{
    string c,f;
    char s[15][100];
    map< string ,int> mymap,copymap;
    int n,m;
    int test,t=0;
    while(cin>>test)
    {
        if(t!=0)cout<<'\n';
        t=1;
        int j=test,g=test,i=0;
        while(test--)
        {
            cin>>s[i];
            mymap[s[i]]=0;
            i++;
        }
        int devide,money,give;
        while(g--)
        {
            cin>>c>>money>>devide;
            if(devide!=0)mymap[c]=mymap[c]-money+(money%devide);
            int d=devide;
            while(d>0)
            {
                give=money/devide;
                cin>>f;
                mymap[f]=mymap[f]+give;
                d--;
            }
        }
        for(i=0; i<j; i++)
        {
            int temp=mymap[s[i]];
            cout<<s[i]<<" "<<temp<<'\n';
        }
    }
    return 0;
}
