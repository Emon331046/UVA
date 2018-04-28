#include<stdio.h>
#include<string.h>
int main()
{
    double sum;
    int test,l,c,o,h,n,i;
    char a[1000];
    scanf("%d%*c",&test);
    while(test--){
        gets(a);
        l=strlen(a);
        sum=0;
        for(i=0;i<l;i++){
            if(a[i]=='C'){
                c=0;
                i=i+1;
                while(a[i]>='0'&&a[i]<='9'){
                    c=c*10+a[i]-'0';
                    i++;
                }
                i=i-1;
                if(c==0)c=1;
                sum=(double)sum +(c*12.01);
            }
            else if(a[i]=='H'){
                h=0;
                i=i+1;
                while(a[i]>='0'&&a[i]<='9'){
                    h=h*10+a[i]-'0';
                    i++;
                }
                i=i-1;
                if(h==0)h=1;
                sum=(double)sum +(h*1.008);
            }
           else if(a[i]=='O'){
                o=0;
                i=i+1;
                while(a[i]>='0'&&a[i]<='9'){
                    o=o*10+a[i]-'0';
                    i++;
                }
                i=i-1;
                if(o==0)o=1;
                sum=(double)sum +(o*16.00);
            }
            else if(a[i]=='N'){
                n=0;
                i=i+1;
                while(a[i]>='0'&&a[i]<='9'){
                    n=n*10+a[i]-'0';
                    i++;
                }
                i=i-1;
                if(n==0)n=1;
                sum=(double)sum +(n*14.01);
            }

        }
              printf("%.3lf\n",sum);
    }
    return 0;
}
