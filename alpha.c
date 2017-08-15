#include<stdio.h>
int main()
{
int i,c;
char a[100];
scanf("%s",&a);
for(i=0;a[i]!='/0';i++)
{
if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
{
c++;
}
}
printf("%d",c);
return 0;
}
