//hajj
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char a[10];
    while( scanf("%s",&a) && a[0]!='*'){
            i=i+1;
        if(a[0]=='H')printf("Case %d: Hajj-e-Akbar\n",i);
    else if(a[0]=='U')printf("Case %d: Hajj-e-Asghar\n",i);
    else continue;
    }
    return 0;
}
