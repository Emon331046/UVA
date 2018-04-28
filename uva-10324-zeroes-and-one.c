#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,test,t,temp,k,count=0;
    char c[1000001];
    while(gets(c) ){
        scanf("%d",&test);
        count=count+1;
        for(t=0;t<test;t++){
            scanf("%d%d",&i,&j);
            if(t==0)printf("Case %d:\n",count);
            if(i>j){
                temp=i;i=j;j=temp;
            }
            for(k=i;k<=j;k++){
                if(c[i]!=c[k])break;
            }
            if(k==j+1)printf("Yes\n");
            else printf("No\n");

        }
    getchar();
    }
    return 0;
}
