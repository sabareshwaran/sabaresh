#include<stdio.h>
int main()
{
int a,b=0,c,n;
scanf("%d",&a);
c=a;
while(c>0)
{
n=c%10;
b++;
c=c/10;
}
printf("%d",b);
}
