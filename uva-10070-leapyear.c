//leap year or not leap year
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,flag,r,u,p,f,t,k=0;;
    char s[100000];
    while( scanf("%s",s)==1 )
    {
        if(k!=0)printf("\n");
        k=k+1;
        flag=0;
        l=strlen(s);
        r=0;
        f=0;
        for(i=0;i<l;i++){
            f=(f*10+(s[i]-'0'))%15;
        }
        if(f==0){
            flag=1;
        }
        for(i=0;i<l;i++){
            r=(r*10 +(s[i]-'0'))%4;
        }
        t=0;
        for(i=0;i<l;i++){
            t=(t*10+(s[i]-'0'))%100;
        }
        u=0;
        for(i=0;i<l;i++){
            u=(u*10+(s[i]-'0'))%400;
        }
        if((r==0 &&t!=0)||u==0){
                flag=1;
                p=0;
            for(i=0;i<l;i++){
            p=(p*10+(s[i]-'0'))%55;
        }
        if(p==0){
            printf("This is leap year.\n");
            if(f==0)printf("This is huluculu festival year.\n");
            printf("This is bulukulu festival year.\n");
        }
        else {
                printf("This is leap year.\n");
        if(f==0)printf("This is huluculu festival year.\n");
             }
        }
        else if(f==0)printf("This is huluculu festival year.\n");
       if(flag==0)printf("This is an ordinary year.\n");
    }
return 0;
}
