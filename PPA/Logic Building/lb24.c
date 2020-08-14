#include<stdio.h>
void main()
{
   int prevterm=0;
   int currentterm=1;
   int nextterm;
   
   for(int i=1;i<=9;i++)
   {
      printf("%d ",prevterm);
      nextterm=prevterm+currentterm;
      prevterm=currentterm;
      currentterm=nextterm;
      
   }
}
/* 
0 1 1 2 3 5 8 13 21

*/
