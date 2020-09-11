/*   1 4 9 16
      25 36 49
         64 81
            100
*/ 

#include<stdio.h>
void main()
{
   int res=1;
   for(int row=1;row<=4;row++)
   {
      for(int space=1;space<row;space++)
      {
         printf("  ");
      }
      for(int col=4;col>=row;col--)
      {
         printf("%d  ",res*res);
         res++;
      }
      printf("\n");
   }
}

/*  OUTPUT:

1  4  9  16  
  25  36  49  
    64  81  
      100  

*/
