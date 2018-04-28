#include<stdio.h>
int main()
{
    int number,total;
    while(scanf("%d",&number)==1){
        total=0;
      while(number>=3){
           number=number - 3 ;
           number=number + 1 ;
            total++;

        }
        if(number==2)total++;
        printf("%d\n",total);
    }
    return 0;
}
