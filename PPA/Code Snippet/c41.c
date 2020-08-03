#include<stdio.h>
const int MAX=10;
int main()
{
   int i=1;
   for(;i<MAX;i=i/i) 
   {
      printf("%d\n",i);
      
   }
   return 0;
}

/*   OUTPUT:
   INFINITE
*/
