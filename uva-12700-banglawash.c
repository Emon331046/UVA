#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,test,t=0,d,a,ban,www;
    char ch[100];
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        scanf("%d%*c",&j);
        ban=0;
        www=0;
        d=0;
        a=0;
        for(i=0;i<j;i++)scanf("%c",&ch[i]);
        for(i=0;i<j;i++){
           if(ch[i]=='B')ban=ban+1;
           else if(ch[i]=='W')www=www+1;
           else if(ch[i]=='T')d=d+1;
           else a=a+1;
        }
        if(a==j)printf("Case %d: ABANDONED\n",t);
        else if(ban==www)printf("Case %d: DRAW %d %d\n",t,www,d);
    else if(ban+a==j)printf("Case %d: BANGLAWASH\n",t);
    else if(www+a==j)printf("Case %d: WHITEWASH\n",t);
    else if(www>ban)printf("Case %d: WWW %d - %d\n",t,www,ban);
    else if(www<ban)printf("Case %d: BANGLADESH %d - %d\n",t,ban,www);
    }
    return 0;
}
