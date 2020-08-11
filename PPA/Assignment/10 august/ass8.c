/*          A B C D E F G H I
              = = = = = = = 
                E F G H I
                  = = = 
                    I
*/

#include<stdio.h>
int main()
{
   int n;
   printf("Enter number=\n");
   scanf("%d",&n);
   
   char ch;
 
   for(int row=0;row<n;row++)
   {
      ch='A'+(row*2);
      for(int space=0;space<row;space++)
      {
         printf("  ");
      }
      
      for(int col=row;col<n*2-row-1;col++)
      {
         
         if(row%2==1)
         {
            printf("= ");
         }
         else
         {
            printf("%c ",ch);
            ch=ch+1;
         }
         
      }
       printf("\n");
   }
   return 0;
}
/*
Enter number=
5
A B C D E F G H I 
  = = = = = = = 
    E F G H I 
      = = = 
        I 

*/
