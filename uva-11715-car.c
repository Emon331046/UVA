#include<stdio.h>
#include<math.h>
int main()
{
    double k,l,m,u,v,s,time,a;
    int test,t=0;
    while(scanf("%d",&test)==1)
    {
        t=t+1;
        if(test==0)break;
        scanf("%lf%lf%lf",&k,&l,&m);
        if(test==1)
        {
            a=(l-k)/m;
            s=(k*m)+(.5*a*m*m);
            printf("Case %d: %.3lf %.3lf\n",t,s,a);
        }
        else if(test==2)
        {
            time=(l-k)/m;
            s=(k*time)+(.5*time*time*m);
            printf("Case %d: %.3lf %.3lf\n",t,s,time);
        }
        else if(test==3)
        {
            v=sqrt(k*k+(2*l*m));
            time=(v-k)/l;
            printf("Case %d: %.3lf %.3lf\n",t,v,time);

        }
        else if(test==4)
        {
            u=sqrt(k*k-(2*l*m));
            time=(k-u)/l;
            printf("Case %d: %.3lf %.3lf\n",t,u,time);

        }
    }
    return 0;
}
