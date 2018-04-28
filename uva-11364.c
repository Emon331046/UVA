//parking
#include<stdio.h>
int main()
{
    int i,j,test,s_test,temp,m,count,k,a[100];
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d",&s_test);
        for(k=0;k<s_test;k++)scanf("%d",&a[k]);
        for(j=0;j<s_test;j++)for(m=0;m<s_test-1;m++){
            if(a[m]>a[m+1]){
              temp=a[m];
              a[m]=a[m+1];
              a[m+1]=temp;
            }
        }
        count = 2*(a[s_test-1]-a[0]);

    printf("%d\n",count);
    }
    return 0;
}
