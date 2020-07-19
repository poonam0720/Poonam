#include<stdio.h>
void main()
{
   int i=0;
   float c,f=0;
   
   printf("Farhrenheit  celsius:\n");
   while(f<=100)
   {
     c=(5.0/6.0)*(f-32.0);
     printf("%.2f   %.2f\n",c,f);
     f=f+1;
   }
   
}
