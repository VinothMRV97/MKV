#include<stdio.h>
int main()
{
int a=0,c=0,n=0,i;
char s[100];
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='a' && s[i]<='z'||s[i]>='A' &&s[i]<='z')
{
a++;
}
else if(s[i]>='0' && s[i]<='9')
{
n++;
}
else
{
c++;
}
}
printf("characters=%d",c);
printf("\nnumber=%d",n);
printf("\nAlphabets=%d",a);
return 0;
}
