#include<stdio.h>
#include<ctype.h>
#include<string.h>
typedef struct id{
    int a;
    char cname[100];
};
int main()
{
    struct id sort[10000],rik;
    int l,i,j,test,d=0;
    char c[100];
    scanf("%d%*c",&test);
    for(j=0;j<test;j++)sort[j].a=0;
    while(test--){
        gets(c);
        l=strlen(c);
        int flag=0,k=0;
        char temp[100];
        for(i=0;i<l;i++){
            if(isalpha(c[i])){
                temp[k]=c[i];
                k++;
                flag=1;
            }
            if(flag==1&&!isalpha(c[i]))break;
        }
        temp[k]='\0';
        for(i=0;i<d;i++){
            if(!strcmp(temp,sort[i].cname)){
                sort[i].a=sort[i].a+1;
                break;
            }
        }
        if(i==d){
            strcpy(sort[d].cname,temp);
            sort[d].a=sort[d].a+1;
            d++;
        }
    }
    for(i=0;i<d-1;i++)for(j=i+1;j<d;j++){
        if(strcmp(sort[i].cname,sort[j].cname)>0){
            rik.a=sort[i].a;
            sort[i].a=sort[j].a;
            sort[j].a=rik.a;
            strcpy(rik.cname,sort[j].cname);
            strcpy(sort[j].cname,sort[i].cname);
            strcpy(sort[i].cname,rik.cname);
        }
    }
    for(j=0;j<d;j++)printf("%s %d\n",sort[j].cname,sort[j].a);
    return 0;
}
