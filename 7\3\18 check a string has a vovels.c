#include <stdio.h>
int main() 
{
char str[50];
int i=0,count=0,flag=0;
scanf("%s",str);
while(str[i]!='\0')
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
	printf("\nyes");
}
else
{
	printf("\n no");
}
return 0;
}
