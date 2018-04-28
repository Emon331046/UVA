#include<bits/stdc++.h>
using namespace std;
int pallindrome(long long n){
int a[10];
int i=0;
int temp=n;
while(temp!=0){
    a[i]=temp%10;
    i++;
    temp=temp/10;
}
for(int j=0,k=i-1;j<=i/2;j++,k--){
    if(a[j]!=a[k])return 0;
}
return 1;
}
int prime(long long n){
int i;
i=sqrt(n);
if(n==2)return 1;
for(int j=2;j<=i;j++)if(n%j==0)return 0;
return 1;
}
int main()
{
long long n;
        int fla=0;
while(scanf("%lld",&n)==1){
        int flag=pallindrome(n);
        int f;
        if(flag==1)f=prime(n);
        if(fla==0){
            printf("%lld\n",n*2);
            if(flag==1&&f==1)fla=1;
        }
}
return 0;
}
