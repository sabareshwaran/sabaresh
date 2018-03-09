#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("The product is:%d",a*b);
if(a/b==1)
printf("Perfect Square");
else
printf("Not perfect square");
return 0;
}
