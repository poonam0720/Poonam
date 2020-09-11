/*  *
    * *
    * * *
    * * * *   */
      
#include<stdio.h>
void main()
{
     for(int outer=1;outer<=4;outer++)
     {
        for(int inner=1;inner<=outer;inner++)
        {
            printf("* ");
        }
        printf("\n");
     }
}
