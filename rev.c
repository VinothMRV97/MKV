#include<stdio.h>
int main()
{
int n,i,o,s,r=1;
scanf("%d",&n);
o=n;
for(i=2;i<=n/2;i++)
{
s=n%10;
r=r*10+s;
n/=10;
}
printf("%d",o);
}
