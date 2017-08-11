#include<stdio.h>
int main()
{
int c=0,i;
char s[100];
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
c++;
}
printf("char=%d",c);
return 0;
}
