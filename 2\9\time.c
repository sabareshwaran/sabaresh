#include <stdio.h>
#include<time.h>
void main() 
{
int m,hr,mins;
scanf("%d",&m);
hr=m/60;
mins=m%60;
printf("%d %d",hr,mins);
getch();
}
