#include <stdio.h>
#include <string.h>
int main()
{
char a[100];
int d = 0, i, l;
printf("Enter a number: ");
gets(a);
l = strlen(a);
for(i=0; i<l; i++){
d= d* 10 + ( a[i] - '0' );
}
printf("%d", d);
return 0;
}
