#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
     int i,count,l,k;
     char a[100];
     while(scanf("%s",a)!=EOF){
            l=strlen(a);
            count=0;
        for(i=0;i<l;i++){
            if(islower(a[i]))count=count+a[i]-96;
            else if(isupper(a[i]))count=count+a[i]-38;
        }
        printf("%d",count);
        k=sqrt(count);
        for(i=2;i<k;i++){
            if(count%i==0)break;
        }
        if(i==k)printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
     }
     return 0;
}
