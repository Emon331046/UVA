#include<stdio.h>
int main()
{
    long long z,i,m,l,j,k,d,test;
    while(scanf("%lld%lld",&m,&l)==2){
        z=0;
       long long w,flag=0;
        for(test=0;test<l;test++){
           z=(m+z)%l;
           if(test==0)w=z;
           if(test==1)d=z;
            if((test!=0&&w==z)||(test!=1&&test>1&&d==z)){
                flag=1;
                break;
            }
        }

            if(test==l)printf("%10lld%10lld    Good Choice\n\n",m,l);
                else printf("%10lld%10lld    Bad Choice\n\n",m,l);
    }
    return 0;
}

