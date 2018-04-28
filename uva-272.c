#include<stdio.h>
int main()
{
    int i,j,length;
    char ch;
     j=0;
    while(scanf("%c",&ch)==1)
    {
    if(ch=='"')
            {
                j=j+1;
                if(j%2==1)printf("``");
                else if(j%2==0)printf("''");
            }
            else printf("%c",ch);
        }
    return 0;
}
