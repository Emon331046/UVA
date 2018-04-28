#include<stdio.h>
int main()
{
    long long l,h,temp,count,s,j,i,ans;
    while( scanf("%lld%lld",&l,&h) ){
        if(l==0 && h==0)break;
        if(l>h){
            temp=l;
            l=h;
            h=temp;
        }
        count=0;
        for(i=l;i<=h;i++){
            j=i;
            ans=0;
            while(1){
                if(j%2==0)j=j/2;
                else j=(3*j)+1;
                ans=ans+1;
                if(j==1)break;
            }
            if(count<ans){
                s=i;
                count=ans;
            }
        }
       printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,s,count);
    }
    return 0;
}
