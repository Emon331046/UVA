#include<stdio.h>
int main()
{
    int test,t,b,c,d,r,temp,n;
    scanf("%d",&test);
    while(test--){
            scanf("%d",&n);
            int a[100]={0},s[100]={0},i,j,f,count;
        d=0;
        temp=n;
       while(temp!=0){
        a[d]=temp%10;
        temp=temp/10;
        d++;
       }
       f=0;
       count=0;
       while(f!=1){
            r=0;
            for(i=0,j=d-1;i<d;i++,j--){
                b=a[i];
                c=a[j];
                s[i]=(b+c+r)%10;
                r=(c+b+r)/10;
            }
            if(r!=0){
                s[d]=r;
                d++;
            }
            for(i=0;i<d;i++){
                    a[i]=s[i];
            }
            for(i=0,j=d-1;i<d/2;i++,j--){
                if(a[i]!=a[j])break;
            }
            if(i==d/2)f=1;
            count++;
    }
    printf("%d ",count);
       for(i=d-1;i>=0;i--)printf("%d",s[i]);
       printf("\n");
    }
    return 0;
}
