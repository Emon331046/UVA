//the lazy lamberjacks
#include<stdio.h>
int main()
{
    int a[4],i,test,temp,t=0,j;
    scanf("%d",&test);
    while(1)
    {
        t=t+1;
        if(t>test)break;
        for(i=0; i<3; i++)
            scanf("%d",&a[i]);

        for(j=0; j<3; j++)
            for(i=0; i<2; i++)
            {
                if(a[i] > a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=a[i];
                }
            }
          if(a[0]+a[1] > a[2]) printf("OK\n");
          else printf("Wrong!!\n");

    }
}
