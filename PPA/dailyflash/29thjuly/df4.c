#include<stdio.h>
void main()
{
   int n;
   int i=1;
   printf("Enter number=\n");
   scanf("%d",&n);
    int row=1;
    while(row<=n)
    {
       int space=1;
       while(space<row)
       {
          printf(" ");
          space++;
       }
       int col=row;
       while(col<=n)
       {
          if(row%2!=0)
          {
             printf("%d   ",i*i);
          }
          else
          {
             printf("%d   ",i*i*i);
          }
          i++;
          col++;
       }
       row++;
       printf("\n");
    }
}
/*  OUTPUT:

Enter number=
5
1   4   9   16   25   
 216   343   512   729   
  100   121   144   
   2197   2744   
    225 

*/
