#include<stdio.h>
void main()
{
     for(int row=1;row<=4;row++)
     {
        for(int space=3;space>=row;space--)
        {
           printf("  ");
        }
        for(int col=1;col<=2*row-1;col++)
        {
             printf("* ");
        }
        printf("\n");
     }
}
/* OUTPUT:

     * 
    * * * 
  * * * * * 
* * * * * * * 

*/
