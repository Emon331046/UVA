#include<bits/stdc++.h>
int main()
{

    char c[200];
    int test;
    scanf("%d%*c",&test);
    while(test--)
    {
        gets(c);
        int l=strlen(c);
        int i,j,flag=0;
        std::stack<char>a;
        for(i=0; i<l; i++)
        {
            if(c[i]=='(')
            {
                a.push(c[i]);
            }
            else if(c[i]==')')
            {
                if(a.empty()){
                        flag=1;
                        break;}
                if(a.top()=='(')a.pop();
                else
                {
                    flag=1;
                    break;
                }
            }
            if(c[i]=='[')a.push(c[i]);
            else if(c[i]==']')
            {
                if(a.empty()){
                        flag=1;
                        break;}
                if(a.top()=='[')a.pop();
                else
                {
                    flag=1;
                    break;
                }
            }
        }

        if(a.empty()&&flag==0)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
