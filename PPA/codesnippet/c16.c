#include<stdio.h>
void main()
{
   int const x=0;
   switch(5/4/3)
   {
      case x:
      printf("Clinton\n");
      break;
      
      case x+1:
      printf("Gandhi\n");
      break;
      
      case x+2:
      printf("Gates\n");
      break;
      
      default:
      printf("Brown\n");
   }
}
