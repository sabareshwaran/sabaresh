#include <stdio.h>
#include<conio.h>
int main()
{
   int x=1,y=1,z,i,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       printf("%d ",x);
       z=x+y;
      x=y;
      y=z;
   }
   
    return 0;
}
