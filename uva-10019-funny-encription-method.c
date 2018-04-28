#include<stdio.h>
int main()
{
    int count1,count2,test,temp,n,r,tata;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        count1=0;
        count2=0;
        temp=n;
        tata=n;
        while(temp!=0){
            if(temp%2==1)count1++;
            temp=temp/2;
        }
        r=0;
        while(tata!=0){
            r=tata%10;
            if(r==7)count2=count2+3;
            else if(r==3||r==5||r==6||r==9)count2=count2+2;
            else count2=count2+1;
            tata=tata/10;
        }
        printf("%d %d\n",count1,count2);
    }
    return 0;
}
