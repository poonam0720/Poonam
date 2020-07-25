/*   1
     1 2
     2 3 4
     4 5 6 7
     7 8 9 10 11   */

#include<stdio.h>
void main()
{
   int outer=1;
     int var=1;
   while(outer<=5)
   {
       int inner=1;
    
       while(inner<=outer)
       {
           printf("%d ",var);
           
           var++;
           inner++;
       }
       var--;
       printf("\n");
       outer++;
       //var=inner-1;
   }
}
