#include<stdio.h>
void main()
{
   switch(*(1+"AB" "CD"+1))
   {
      case 'A':
      printf("pulp  fliction\n");
      break;
      
      case 'B':
      printf("12 angry man\n");
      break;
      
      case 'C':
      printf("casabance\n");
      break;
      
      case 'D':
      printf("blood diamond\n");
   }
}
