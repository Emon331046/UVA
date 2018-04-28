#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,r1,r2;
    while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)){
        if(x1==0&&x2==0&y1==0&y2==0)break;
        r1=abs(x1-x2);
        r2=abs(y1-y2);
        int count;
        if(r1==0&&r2==0)count=0;
        else if(r1==0||r2==0||r1==r2)count=1;
        else count=2;
        printf("%d\n",count);
    }
    return 0;
}
