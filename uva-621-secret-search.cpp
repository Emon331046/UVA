#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,l,male,female;
    scanf("%d%*c",&test);
    while(test--)
    {
        string a;
        cin>>a;
        l=a.length();
        if(a=="1"||a=="4"||a=="78")printf("+\n");
        else if(a[l-2]=='3'&&a[l-1]=='5')printf("-\n");
        else if(a[0]=='9'&&a[l-1]=='4')printf("*\n");
        else printf("?\n");
    }
    return 0;
}
