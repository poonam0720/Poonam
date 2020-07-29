#include<stdio.h>
void main()
{
   int n;
   
   printf("Enter number of rows=\n");
   scanf("%d",&n);
   int row=n;
   while(row>=1)
   {
      int space=n;
      while(space>row)
      {
         printf("  ");
         space--;
      }
      int col=1;
      
      int res=1;
      while(col<=row)
      {
         printf("%d ",res);
      //   i++;
         col++;
         res=res*col;
      }
      
      row--;
      printf("\n");
   }
}

/*  OUTPUT:

Enter number of rows=
5
1 2 6 24 120 
  1 2 6 24 
    1 2 6 
      1 2 
        1 
*/
