/*     * * * *
         * * *
           * *
             *
*/             
             

#include<stdio.h>
void main()
{
   for(int row=1;row<=4;row++)
   {
      for(int space=1;space<row;space++)
      {
         printf("  ");
      }
      for(int col=4;col>=row;col--)
      {
         printf("* ");
      }
      printf("\n");
   }
}

/*
Output:

* * * * 
  * * * 
    * * 
      * 

*/
