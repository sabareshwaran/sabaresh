#include <stdio.h>
#include<conio.h>
int main() 
{
  char s[10];
  int k,i;
  printf("\n enter the string");
  scanf("%s",&s);
  printf("\n enter the k value \n");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
  printf("%c",s[i]);
  }
	return 0;
}
