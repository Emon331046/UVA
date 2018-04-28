#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char a[1000];
    while(gets(a))
    {
        l=strlen(a);
        for(i=0; i<l; i++)
        printf("%c",a[i]-7);
        printf("\n");
    }
    return 0;
}
