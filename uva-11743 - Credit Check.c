#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d%*c",&test);
    while(test--)
    {
        char a[10][10];
        scanf("%s%*c%s%*c%s%*c%s%*c",a[0],a[1],a[2],a[3]);
        int temp,sum1=0,sum2=0,i,k,j;
        for(i=0; i<4; i++)
        {
            for(j=0; j<4; j=j+2)
            {
                temp=a[i][j]-'0';
                temp=temp*2;
                if(temp>9)
                {
                    sum1=sum1+(temp%10)+1;
                }
                else sum1=sum1+temp;
            }
            for(k=1;k<4;k=k+2)sum2=sum2+(a[i][k]-'0');
        }
        int sum;
        sum=sum1+sum2;
        if(sum%10==0)printf("Valid\n");
        else printf("Invalid\n");
    }
    return 0;
}
