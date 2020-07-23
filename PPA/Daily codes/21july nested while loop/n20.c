#include<stdio.h>
void main()
{
    
    int outer=1;
    while(outer<=5)
    {
       int inner=5;
       while(inner>=outer)
       {
          if(outer==1||inner==5)
          {
            printf("* ");
          }
          else
          {
            printf("= ");
          }
          inner--;
       }
       printf("\n");
       outer++;
    }
}
