#include <stdio.h>
void main()
{
int a, i;
printf("Enter an integer: ");
scanf("%d",&a);
for(i=1; i<=5; ++i)
{
printf("%d * %d = %d ", a, i, a*i);
}
getch();
}
