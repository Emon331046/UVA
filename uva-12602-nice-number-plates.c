#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char a[9],d;
    int s,test,t=0,m,r,i,n,f,w,g;
    scanf("%d%*c",&test);
    while(test--){
            t=t+1;
            scanf("%s",&a);
    m=(a[0]-'A')*26*26;
    n=(a[1]-'A')*26;
    g=(a[2]-'A');
    f=m+n+g;
    s=0;
    for(i=4;i<8;i++){
        s=a[i]-'0'+s*10;
    }
    w=s-f;
    w=abs(w);
    if(w<=100)printf("nice\n");
    else printf("not nice\n");
    }
    return 0;
}

