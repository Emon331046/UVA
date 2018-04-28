#include<stdio.h>
#include<string.h>
int main()
{
    int l,ll,i,j,k,test;
    char s[1000],a[1000];
    scanf("%d%*c",&test);
    while(test--)
    {
        gets(s);
        gets(a);
        l=strlen(s);
        char s1[1000],s2[1000],s3[1000],s4[1000],s5[1000];
        for(i=0,j=0; i<l; i++,j++)
        {
            if(s[i]!='<'||s[i]!='>')s1[j]=s[i];
            if(s[i]=='<')
            {
                s1[j]=0;
                printf("%s",s1);
                for(i=i+1,j=0; i<l; i++,j++)
                {
                    if(s[i]!='>')s2[j]=s[i];
                    else
                    {
                        s2[j]=0;
                        printf("%s",s2);
                        for(i=i+1,j=0; i<l; i++,j++)
                        {
                            if(s[i]!='<')s3[j]=s[i];
                            else
                            {
                                s3[j]=0;
                                printf("%s",s3);
                                for(i=i+1,j=0; i<l; i++,j++)
                                {
                                    if(s[i]!='>')s4[j]=s[i];
                                    else
                                    {
                                        s4[j]=0;
                                        printf("%s",s4);
                                        for(i=i+1,j=0; i<l; i++,j++)s5[j]=s[i];
                                        s5[j]=0;
                                        printf("%s\n",s5);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        ll=strlen(a);
        a[ll-3]=0;
        printf("%s%s%s%s%s\n",a,s4,s3,s2,s5);
    }
    return 0;
}
