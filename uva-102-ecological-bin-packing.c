#include<stdio.h>
int main()
{
    int a[5][5],b,c,k,f,l,n,m,count,i,j,s,x;
    char t1,t2,t3,temp;
    count=0;
    for(i=0; i<3; i++)for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
            count=count+a[i][j];
        }
    s=0;
    for(i=0; i<3; i++)for(j=0; j<3; j++)
        {
            if(a[i][j]>s)
            {
                s=a[i][j];
                b=i;
                c=j;
            }
        }
    if(c==0)t1='B';
    else if(c==1)t1='G';
    else t1='C';
    x=0;
    for(i=0; i<3; i++)for(j=0; j<3; j++)
        {
            if(i==b||j==c)continue;
            else if(a[i][j]>x)
            {
                x=a[i][j];
                k=i;
                l=j;
            }
        }
    if(l==0)t2='B';
    else if(l==1)t2='G';
    else t2='C';
    m=3-k-b;
    n=3-l-c;
    if(n==0)t3='B';
    else if(n==1)t3='G';
    else t3='C';
    for(i=0; i<3; i++)for(j=0; j<3; j++)
        {

            if(b==i&&c==j)
            {
                printf("%c",t1);
                break;
            }
            else if(m==i&&n==j)
            {
                printf("%c",t3);
                break;
            }
            else if(k==i&&l==j)
            {
                printf("%c",t2);
                break;
            }

        }
    count=count-a[b][c]-a[k][l]-a[m][n];
    printf(" %d",count);
}
