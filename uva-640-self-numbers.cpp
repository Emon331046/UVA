#include<bits/stdc++.h>
int a[1000000]={0};
int main()
{
    int n,r,i,j;
    for(i=1;i<1000000;i++){
                int sum=i;
                int temp=sum;
                while(temp!=0){
                    sum=sum+temp%10;
                    temp=temp/10;
                }
        if(sum<1000000)a[sum]=1;
    }
    for(i=1;i<1000000;i++)if(a[i]==0)printf("%d\n",i);
    printf("%d\n",i);
    return 0;
}

