/*   A 2 C 4 E
     A 7 C 9
     A 11 C
     A 14
     A */

#include<stdio.h>
void main()
{
    
    int count=1;
    int outer=1;
    while(outer<=5)
    {
       int inner=5;
       char ch='A';
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
