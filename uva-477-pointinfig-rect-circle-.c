#include<stdio.h>
#include<math.h>
int main()
{
    double a[1000],b[1000],c[10000],d[10000],c1[100],c2[1000],r[1000],x,y,k;
    char ch[1000];
    int i=0,j,count=1;
    while(scanf("%c",&ch[i])){
        if(ch[i]=='*')break;
          else if(ch[i]=='r') scanf("%lf%lf%lf%lf%*c",&a[i],&b[i],&c[i],&d[i]);
          else if(ch[i]=='c')scanf("%lf%lf%lf%*c",&c1[i],&c2[i],&r[i]);
        i++;
    }
    while(scanf("%lf%lf",&x,&y)){
            if(x==9999.9&&y==9999.9)break;
            int flag=0;
for(j=0;j<=i;j++){
    if(ch[j]=='r'&&x>a[j]&&x<c[j]&&y<b[j]&&y>d[j]){
            printf("Point %d is contained in figure %d\n",count,j+1);
    flag=1;
    }
    else {
        k=((c1[j]-x)*(c1[j]-x))+((c2[j]-y)*(c2[j]-y));
        k=sqrt(k);
        if(k<r[j]){
            printf("Point %d is contained in figure %d\n",count,j+1);
    flag=1;
        }
    }
}
if(flag==0)printf("Point %d is not contained in any figure\n",count);
count++;
    }
    return 0;
}
