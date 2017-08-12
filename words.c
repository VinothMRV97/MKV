#include<stdio.h>
int main()
{
int i,w=0;
char s[100];
scanf("%s",&s);
for(i=0;s[i]!="/0";i++)
{
if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
{
w++;
}
printf("%d",w);
return 0;
}
