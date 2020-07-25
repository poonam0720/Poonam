/*        1
         2 3
        4 5 6
       7 8 9 10   */ 
       
#include<stdio.h>
void main()
{
   int row=1;
   int k=1;
   while(row<=4)
   {
       int space=3;
       while(space>=row)
       {
          printf(" ");
          space--;
       }
       
       int col=1;
       while(col<=row)
       {
          printf("%d ",k);
          k++;
          col++;
       }
       printf("\n");
       row++;
   }
}       
