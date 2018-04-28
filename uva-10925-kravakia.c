#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,n,p,d,r,temp,g,flag,w,t,y,f,z,h,x,count=1;
    while(scanf("%d%*c%d%*c",&n,&p))
    {
        if(n==0&&p==0)break;
        char s[100],c[100],f[100];
        int a[100]= {0};
        temp=0;
        for(i=0; i<n; i++)
        {
            scanf("%s",s);
            l=strlen(s);
            d=0;
            r=0;
            for(j=l-1; j>=0; j--)
            {
                g=a[d]+s[j]-'0'+r;
                a[d]=g%10;
                r=g/10;
                d++;
            }
            if(r)
            {
                a[d]=r+a[d];
                d++;
            }
            if(temp<d)temp=d;
        }

        flag=0;
        w=0;
        t=0;
        y=0;
        int flag2=0;
        for(k=temp-1; k>=0; k--)
        {
            if(a[k]!=0||flag2==1)
            {
                f[w]=a[k]+'0';
                w++;
                flag2=1;
            }
            z=a[k]+t*10;
            t=z%p;
            h=z/p;
            if(flag==1||h!=0)
            {
                c[y]=h+'0';
                y++;
                flag=1;
            }
        }
        if(w==0)
        {
            f[w]='0';
            w++;
        }
        if(y==0)
        {
            c[0]='0';
            y=1;
        }
        c[y]='\0';
        f[w]='\0';
        printf("Bill #%d costs %s: each friend should pay %s\n\n",count++,f,c);
    }
    return 0;
}
