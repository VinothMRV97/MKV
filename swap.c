#include<stdio.h>
int main()
{
int a,b,temp;
scanf("%d%d",&a,&b);
printf("before swap:%d,%d",a,b);
temp=a;
a=b;
b=temp;
printf("\nafter swap:%d,%d",a,b);
return 0;
}
