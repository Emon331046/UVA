#include<stdio.h>
int main()
{
    int n=0,test;
    double lenght,wide,deep,weight,sum;
    scanf("%d",&test);
    while(test--){
        scanf("%lf%*c%lf%*c%lf%*c%lf",&lenght,&wide,&deep,&weight);
        sum=lenght+wide+deep;
        if((lenght==56.00&&wide==45&&deep==25&&weight<=7)||(sum<=125&&weight<=7)){
            n++;
            printf("1\n");
        }
        else printf("0\n");
    }
    printf("%d\n",n);
    return 0;
}
