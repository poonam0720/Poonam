/*     A B C D
         A B C
           A B
             A
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
      char ch='A';
      for(int col=4;col>=row;col--)
      {
         printf("%c ",ch);
         ch++;
      }
      printf("\n");
   }
}

/*
OUTPUT:

A B C D 
  A B C 
    A B 
      A 
      
*/
