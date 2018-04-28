#include<stdio.h>
#include<string.h>
int main()
{
    int test,i,l,male,female;
    char a[1000];
    scanf("%d%*c",&test);
    while(test--){
        gets(a);
        l=strlen(a);
        male=0;
        female=0;
        for(i=0;i<l;i++){
            if(a[i]=='M')male++;
            if(a[i]=='F')female++;
        }
        if(male!=1&&female!=1&&male==female)printf("LOOP\n");
        else printf("NO LOOP\n");
    }
    return 0;
}
