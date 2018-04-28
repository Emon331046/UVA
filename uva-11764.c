//jamping mario
#include<stdio.h>
int main()
{
    int i,test,t,j,m,a[100],high,low;
    scanf("%d",&test);
    j=0;
    for(t=0;t<test;t++){
            low=high=0;

        scanf("%d",&m);
        for(i=0;i<m;i++)scanf("%d",&a[i]);
        for(i=0;i<m-1;i++){
            if(a[i]<a[i+1])high++;
            else if(a[i]>a[i+1])low++;
        }
    printf("Case %d: %d %d\n",++j,high,low);
    }
    return 0;
}
