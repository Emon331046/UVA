#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,i,k,j,d,carry1,carry2,sum,digit,o;
    char s1[1000],s2[1000];
    while(gets(s1)&&gets(s2)){
        int a[1000]={0};
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=l1-1,k=0;i>=0;i--,k++){
            carry1=0;
            carry2=0;
            for(j=l2-1,d=k;j>=0;j--,d++){
                sum=(s1[i]-'0')*(s2[j]-'0')+carry2;
                carry2=sum/10;
                digit=(sum%10)+a[d]+carry1;
                a[d]=digit%10;
                carry1=digit/10;
            }
            if(carry1||carry2){
                a[d]=a[d]+carry1+carry2;
                d++;
            }
        }

         for(d--;a[d]==0&&d>0;d--){}
            for(i=d;i>=0;i--)printf("%d",a[i]);
         printf("\n");
    }
    return 0;
}
