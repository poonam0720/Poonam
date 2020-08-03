#include<stdio.h>
int main()
{
   int max=5;
   int i=0;
   for(;;)
   {
      i++;
      if(i>max)
          break;
      printf("i=%d\n",i);
   }
   return 0;
}


