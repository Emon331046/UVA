#include<stdio.h>
int main()
{
    long long n,devision,reminder,temp,ans;
    while(scanf("%lld",&ans)==1 && ans!=0)
    {

        while(ans>9)
        {
            devision=ans;
            temp=0;
            for(  ; devision>0; )
            {
                reminder=devision%10;
                devision=devision/10;
                temp=temp+reminder;
            }
            ans=temp;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
