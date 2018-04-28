#include<stdio.h>
int main()
{
    int i,d,r,count,f,temp,n;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        int a[10000]= {0},b0=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0;
        a[0]=1;
        count=1;
        for(i=1; i<=n; i++)
        {
            d=0;
            r=0;
            while(1)
            {
                temp=a[d];
                a[d]=(r+temp*i)%10;
                r=(r+temp*i)/10;
                d=d+1;
                if(count==d)break;
            }
            while(r!=0)
            {
                a[d]=r%10;
                r=r/10;
                d=d+1;
            }
            if(count<d)count=d;
        }
        f=0;
        printf("%d! --\n",n);
        for(i=count; i>=0; i--)
        {
            if(a[i]!=0||f==1)
            {
                f=1;
                if(a[i]==0)b0=b0+1;
                else if(a[i]==1)b1=b1+1;
               else if(a[i]==2)b2=b2+1;
               else if(a[i]==3)b3=b3+1;
               else if(a[i]==4)b4=b4+1;
               else if(a[i]==5)b5=b5+1;
               else if(a[i]==6)b6=b6+1;
              else if(a[i]==7)b7=b7+1;
              else if(a[i]==8)b8=b8+1;
              else if(a[i]==9)b9=b9+1;

            }
        }
        printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n",b0,b1,b2,b3,b4);
        printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",b5,b6,b7,b8,b9);
    }
    return 0;
}
