//egypt
#include<stdio.h>
#include<math.h>
int main()
{
    int b[3],i,s,j,temp;
    while(scanf("%d%d%d",&b[0],&b[1],&b[2]))
    {
        if(b[0]==0 && b[1]==0 && b[2]==0)break;
        for( j=0; j<3; j++)
            for(i=0; i<2; i++)
            {
                if(b[i]>b[i+1])
                {
                    temp=b[i];
                    b[i]=b[i+1];
                    b[i+1]=temp;
                }
            }
        s = b[0]*b[0] + pow(b[1],2);
        if( s != (b[2]*b[2]) )printf("wrong\n");
        else printf("right\n");
    }
    return 0;
}
