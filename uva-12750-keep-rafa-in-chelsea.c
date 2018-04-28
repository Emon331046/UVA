#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,test,t=0,count;
    char ch[600];
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%d%*c",&j);
        count=0;
        for(i=0;i<j;i++)scanf("%c%*c",&ch[i]);
        for(i=0;i<j;i++){
           if(ch[i]!='W')count=count+1;
           if(count==3)break;
           else if(ch[i]=='W')count=0;
        }
        if(i==j)printf("Case %d: Yay! Mighty Rafa persists!\n",t);
        else if(i<j)printf("Case %d: %d\n",t,i+1);

    }
    return 0;
}
