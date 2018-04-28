
#include<stdio.h>
#include<string.h>

int main()
{
    int test,l=1;
    scanf("%d",&test);
    while(test--){
        int h,m,n;
            scanf("%d%*c%d%*c%d",&n,&h,&m);
        int hh[10000],mm[10000],count[10000],time[10000],i,j,k,sum=9999999;
        for(i=0;i<n;i++)scanf("%d%*c%d%*c%d",&hh[i],&mm[i],&time[i]);
         k=h*60+m;
        for(i=0;i<n;i++){
            j=60*(hh[i])+mm[i];
           if(j<k)j=j+(24*60);
           count[i]=j-k+time[i];
           if(sum>count[i])sum=count[i];
        }
         printf("Case %d: %d\n",l++,sum);
    }
    return 0;
}
