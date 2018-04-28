//lmber jacks sequence
#include<stdio.h>
int main()
{
    int a[10],test,t=0,count,i,j,c;
    scanf("%d",&test);
    while(1){
        t=t+1;
        if(t>test)break;
        for(i=0;i<10;i++)scanf("%d",&a[i]);
        c=0;
        count=0;
        if(t==1)printf("Lumberjacks:\n");
            for(i=0;i<10-1;i++){
                if(a[i]>a[i+1])count=count+1;
                else if(a[i]<a[i+1])c=c+1;
        }
        if(c==0 || count==0)printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}
