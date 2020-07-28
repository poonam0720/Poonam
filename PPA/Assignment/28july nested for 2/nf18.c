#include<stdio.h>
void main()
{
   
   for(int row=1;row<=5;row++)
   {
      for(int col=1;col<=2*row-1;col++)
      {
          printf("$");
         
      }
      printf("\n");
   }
}

/* OUTPUT:

$
$$$
$$$$$
$$$$$$$
$$$$$$$$$

*/
