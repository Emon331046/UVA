#include<stdio.h>
int main()
{
    int a,b,c,d,test,i;

    while( scanf("%d",&test) ){
            if(test==0)break;
    scanf("%d%d",&a,&b);
        for(i=0;i<test;i++){
                scanf("%d%d",&c,&d);
        if(a==c || b==d)printf("divisa\n");
        else if(a>c){
            if(b>d)printf("SO\n");
            else if(b<d)printf("NO\n");
        }
         else {
            if(b>d)printf("SE\n");
            else if(b<d)printf("NE\n");
         }
      }
    }
    return 0;
}
