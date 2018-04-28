#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a[10],v[10],i;
    while(scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4])!=EOF){
        scanf("%d%d%d%d%d",&v[0],&v[1],&v[2],&v[3],&v[4]);
        for(i=0;i<5;i++){
            if(a[i]==v[i])break;
        }
        if(i==5)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
