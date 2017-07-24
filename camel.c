#include <stdio.h>  
int main()  
{  
char s[50];  
int i=0, j, l;  
scanf("%s",s); 
l=strlen(s);  
while(i!=l)                         
{  
if((i==0))   
{  
if(s[i]>90)                         
s[i] = s[i]%65+33;  
i++;  
}  
else if((s[i]!=' ') && (s[i]<=90)) 
{  
s[i]=s[i]%97+32;  
i++;  
}  
else if(s[i]==' ')                
{  
i++;  
if(s[i]>96)  
s[i]=s[i]%65+33;  
i++;  
}  
else  
i++;                                
}  
s[i]='\0';  
printf("%s",s);  
return 0;  
} 
