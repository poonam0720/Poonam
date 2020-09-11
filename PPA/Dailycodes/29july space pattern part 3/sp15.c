#include<stdio.h>
void main()
{
     for(int row=1;row<=4;row++)
     {
        int x=1;
        for(int space=3;space>=row;space--)
        {
           printf("  ");
        }
        for(int col=1;col<=2*row-1;col++)
        {
             printf("%d ",x);
             x++;
        }
        printf("\n");
     }
}
/* OUTPUT:
      1 
    1 2 3 
  1 2 3 4 5 
1 2 3 4 5 6 7 

 

*/
