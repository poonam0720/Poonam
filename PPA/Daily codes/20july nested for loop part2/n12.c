#include<stdio.h>
void main()
{
   int row,col;
   printf("Enter row and column=\n");
   scanf("%d %d",&row,&col);
  
   for(int i=1;i<=row;i++)
   {
       for(int j=1;j<=col;j++)
       {
          if(((i==1)||(i==row))&&((j==1)||(j==col)) )
          
             printf("= ");
          else 
             printf("* ");
       }
       printf("\n");
   }
}



/*user defined*/
