#include<stdio.h>
int main()
{
int n,l,r;
printf("Enter n:");
scanf("%d",&n);
printf("\n Enter l and r:");
scanf("%d%d",&l,&r);
if(l<n<r)
printf("Present");
else
printf("Not present");
getch();
}
