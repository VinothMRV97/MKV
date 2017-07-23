#include<stdio.h>
int main()
{
int n,s,r=0;
scanf("%d",&n);
while(n!=0)
{
s=n%10;
r=r*10+s;
n/=10;
}
printf("%d",r);
  return 0;
}
