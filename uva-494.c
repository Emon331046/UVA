#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j,count;
    char a[1000];

    while(gets(a))
    {
        l=strlen(a);
    count=0;
        for(i=0; i<l; i++)
        {
            if(isalpha(a[i])){
            if(! isalpha(a[i+1]))count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

