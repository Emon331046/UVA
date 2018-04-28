//how old are u
#include<stdio.h>
int main()
{
    int d,m,y,a,b,s,p,r,c,age,test,t=0;
    char e,u,i,o;
    scanf("%d",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        scanf("%d%c%d%c%d",&d,&e,&m,&u,&y);
        scanf("%d%c%d%c%d",&a,&i,&b,&o,&c);
        s=y-c;
        p=m-b;
        r=d-a;
        if(r<0)p=p-1;
        if(p<0)s=s-1;
        if(s<0)printf("Case #%d: Invalid birth date\n",t);
        if(s>130)printf("Case #%d: Check birth date\n",t);
        if(s>=0 && s<=130)printf("Case #%d: %d\n",t,s);
    }
    return 0;
}
