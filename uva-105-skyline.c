#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r,max=0,i;
    int a[1000]={0};
    while(scanf("%d%d%d",&x,&r,&y)!=EOF){
            if(y>max)max=y;
        for(i=x;i<=y;i++){
                if(r>a[i])a[i]=r;
        }
    }
    printf("1 %d ",a[1]);
    for(i=1;i<=max;i++){

         //if(a[i]!=a[i-1]&&a[i]!=0)printf("%d %d ",i,a[i]);
          printf("%d %d \n",i,a[i]);
    }

    return 0;
}

