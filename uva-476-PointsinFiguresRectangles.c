#include<stdio.h>
int main()
{
    double a[1000],b[1000],c[10000],d[10000],x,y;
    char ch;
    int i=0,j,count=1;
    while(scanf("%c",&ch)){
        if(ch=='*')break;
            scanf("%lf%lf%lf%lf%*c",&a[i],&b[i],&c[i],&d[i]);
        i++;
    }
    while(scanf("%lf%lf",&x,&y)){
            if(x==9999.9&&y==9999.9)break;
            int flag=0;
for(j=0;j<=i;j++){
    if(x>a[j]&&x<c[j]&&y<b[j]&&y>d[j]){
            printf("Point %d is contained in figure %d\n",count,j+1);
    flag=1;
    }
}
if(flag==0)printf("Point %d is not contained in any figure\n",count);
count++;
    }
    return 0;
}
