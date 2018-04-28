#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];
int main()
{
   int l1,l2;
    char s1[10000],s2[10000],c1[10000],c2[10000];
    while(gets(s1)){
    gets(s2);
   l1=strlen(s1);
    l2=strlen(s2);
    if(l1<l2){
            strcpy(c1,s2);
            strcpy(c2,s1);
            swap(l1,l2);
    }
    else {
        strcpy(c1,s1);
        strcpy(c2,s2);
    }
    int i,j;
    for(i=0;i<l1;i++){
        t[0][i]=0;
        t[i][0]=0;
    }
    for(i=1;i<=l1;i++){
        for(j=1;j<=l2;j++){
            if(c1[i-1]==c2[j-1]){
                t[i][j]=t[i-1][j-1]+1;
            }
            else {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    printf("%d\n",t[l1][l2]);
    }
    return 0;
}

