/*   A 2 C 4 E
     F 7 H 9
     J 11 L
     M 14
     O */

#include<stdio.h>
void main()
{
    char ch='A';
    int count=1;
    int outer=1;
    while(outer<=5)
    {
       int inner=5;
       while(inner>=outer)
       {
         if(inner==2||inner==4)
         {
            printf("%d ",count);
         }
         else
         {
          printf("%c ",ch);
         }
          count++;
          ch++;
          inner--;
       }
       printf("\n");
       outer++;
    }
}
