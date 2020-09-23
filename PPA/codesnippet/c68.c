#include<stdio.h>
void main()
{
   int x=0;
   while(+(+x--)!=0)
   {
      printf("%d",x);
   }
}

/*  Nothing will be printed  */
