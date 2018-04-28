//onetwothree
#include<stdio.h>
#include<string.h>
int main()
{
    int l,test,i,j,count,t=0;
    char a[10],b[4]="one";
    scanf("%d",&test);
    while(1){
            t=t+1;
    if(t>test)break;
            scanf("%s",&a);
            count=0;
            l=strlen(a);
            if(l==3){
              for(i=0;i<3;i++){for(j=0;j<3;j++)
                if(a[j]==b[i]){
                    count++;
                    break;
                }
              }
              if(count>=2)printf("1\n");
                else printf("2\n");
            }
            else printf("3\n");

        }
    return 0;
}
