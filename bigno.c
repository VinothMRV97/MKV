#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
  if(a>c)
  printf("a is big=%d",a)
  else
  printf("c is big=%d",c);
  }
else 
printf("b is big=%d",b);
return 0;
}
