#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
printf("enter your numbers");
scanf("%d%d",&x,&y);
x=x^y;
y=x^y;
x=x^y;		
printf("%d %d",x,y);
}
