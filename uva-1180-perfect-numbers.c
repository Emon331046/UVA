#include<stdio.h>
#include<math.h>
int main()
{
    long long m,test,n,g,p,s,j,e,f,i;
    int a[100000];
    scanf("%lld",&test);
        for(i=0;i<test;i++){if(i<test-1)scanf("%d%*c",&a[i]);
        else scanf("%d",&a[i]);}
        for(j=0;j<test;j++){
        f=0;
        m=a[j];
        if(m==2||m==3||m==5||m==7||m==11||m==13||m==17||m==23){f=1;
        n= pow(2,m-1)*(pow(2,m)-1);
        g=sqrt(n);
        s=0;
        for(i=1;i<=g;i++){
            if(n%i==0){
                s=s+i+(n/i);
            }
        }
        s=s/2;}
        if(m==31)printf("yes\n");
        else if(s==n&&f==1)printf("Yes\n",n);
        else if(f==1||m==29||m==33)printf("No\n");
        else printf("No\n");
    }
    return 0;
}
