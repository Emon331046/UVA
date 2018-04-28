//find the phonenumber
#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char a[50];
    while(scanf("%s",&a)==1)
    {
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if(a[i]>='A' &&a[i]<='C')
                                    a[i]='2';
            if(a[i]>='D' &&a[i]<='F')
                                    a[i]='3';
            if(a[i]>='G' &&a[i]<='I')
                                    a[i]='4';
            if(a[i]>='J' &&a[i]<='L')
                                    a[i]='5';
            if(a[i]>='M' &&a[i]<='O')
                                    a[i]='6';
            if(a[i]>='P' &&a[i]<='S')
                                    a[i]='7';
            if(a[i]>='T' &&a[i]<='V')
                                    a[i]='8';
            if(a[i]>='W' &&a[i]<='Z')
                                    a[i]='9';

        }
        printf("%s\n",a);
    }
    return 0;
}
