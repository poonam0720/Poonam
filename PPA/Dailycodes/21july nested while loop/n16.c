/*   A B C D E
     F G H I
     J K L
     M N
     O */

#include<stdio.h>
void main()
{
    char ch='A';
    int outer=1;
    while(outer<=5)
    {
       int inner=5;
       while(inner>=outer)
       {
          printf("%c ",ch);
          ch++;
          inner--;
       }
       printf("\n");
       outer++;
    }
}
