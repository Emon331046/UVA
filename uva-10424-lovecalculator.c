//lovecalculator
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char n1[26],n2[26],c,s='%';
    int sum1,r1,sum2,r2,l1,l2,i;
    float d;
    while( gets(n1) && gets(n2) )
    {
        l1=strlen(n1);
        l2=strlen(n2);
        sum1=0;
        sum2=0;
        for(i=0; i<l1; i++)
        {
            if( isalpha(n1[i]) )
            {
                c=toupper(n1[i]);
                sum1=sum1 + c-64;
            }
        }

        for(i=0; i<l2; i++)
        {
            if( isalpha(n2[i]) )
            {
                d=toupper(n2[i]);
                sum2=sum2 + d-64;
            }
        }
        while(sum1>9 || sum2>9)
        {
            r1=0;
            r2=0;
            while(sum1!=0||sum2!=0)
            {
                r1=r1+(sum1%10);
                sum1=sum1/10;
                r2=r2+(sum2%10);
                sum2=sum2/10;
            }
            sum1=r1;
            sum2=r2;
            }
        if(sum1<sum2)d=(float) 100*sum1/sum2;
        else d=(float) 100*sum2/sum1;
        printf("%.2f %c\n",d,s);
    }
    return 0;
}

