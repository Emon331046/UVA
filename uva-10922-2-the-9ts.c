#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,sum,a[1000],count,b,l,r,t;
    char ch[10000];
    while(scanf("%s",ch)){
        l=strlen(ch);
        if(l==1&&ch[0]=='0')break;
        r=0;
        sum=0;
        for(i=0;i<l;i++){
            r=(ch[i]-'0'+(r*10))%9;
            sum=(ch[i]-'0')+sum;
        }
        count=0;
        if(r==0){
            count=count+1;

            while(1){
                if(sum%9!=0)break;
                if(sum<10)break;
                count=count+1;
                b=0;
                while(sum!=0){
                    b=b+(sum%10);
                    sum=sum/10;
                }
                sum=b;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",ch,count);
        }
        else printf("%s is not a multiple of 9.\n",ch);
    }
    return 0;
}
