#include<bits/stdc++.h>

using namespace std;

int main()
{
    int e,n,flag;
    while(scanf("%d",&n)){
        if(n==0)break;
         vector< int >v[203];
        flag=1;
    scanf("%d",&e);
    while(e--){
            int n1,n2;
        scanf("%d%d",&n1,&n2);
        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }
    int level[201];
    for(int i=0;i<201;i++)level[i]=300;
    queue<int>q;
    q.push(0);
    level[0]=0;
    while(!q.empty()){
        int u;
        u=q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++){
            if(level[v[u][i]]==level[u]){
                flag=0;
                break;
            }
            else if(level[v[u][i]]>200){
                level[v[u][i]]=level[u]+1;
                q.push(v[u][i]);
            }

        }
    }
    if(flag==1)printf("BICOLORABLE.\n");
    else printf("NOT BICOLORABLE.\n");
    }
    return 0;
}

