#include<stdio.h>
#include<string.h>
struct lucky{
    int a;
    char c[200];
};
int main()
{
    int test,t=0,i,j;
    struct lucky id[100],temp;
    scanf("%d%*c",&test);
    while(test--){
        t=t+1;
        for(i=0;i<10;i++)scanf("%s%d",&id[i].c,&id[i].a);
        for(i=0;i<9;i++)for(j=i+1;j<10;j++){
            if(id[i].a<id[j].a){
                strcpy(temp.c,id[i].c);
                temp.a=id[i].a;

                strcpy(id[i].c,id[j].c);
                id[i].a=id[j].a;

                strcpy(id[j].c,temp.c);
                id[j].a=temp.a;
            }
        }
        printf("Case #%d:\n",t);
        for(i=0;i<10;i++)if(id[0].a==id[i].a)printf("%s\n",id[i].c);
    }
    return 0;
}
