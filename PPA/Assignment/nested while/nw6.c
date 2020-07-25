/*            *****
              *   *    
              *   *
              *   *
              *****      */
              
      /*Hollow Square*/
      
#include<stdio.h>        
void main()
{
   int row=1;
   int n;
   
   printf("Enter number of rows=\n");
   scanf("%d",&n);
   
   while(row<=n)
   {
      int col=1;
      while(col<=n)
      {
          if(row==1||row==n||col==1||col==n)
          {
              printf("*");
          }
          else
          {
              printf(" ");
          }
          col++;
      }
      printf("\n");
      row++;
   }
}
