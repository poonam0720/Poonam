#include<stdio.h>
void main()
{
    int outer=1;
    while(outer<=5)
    {
       int inner=1;
       while(inner<=outer)
       {
          if(outer==2||outer==4)
          {
            printf("= ");
          }
          else
          {
            printf("* ");
          }
          inner++;
       }
       printf("\n");
       outer++;
    }
}
