#include<stdio.h>
void main()
{
   int a=1;
   
   switch(a,a+1)
   {
       case 1:
         printf("PPA");
         break;
         
       case 2:
         printf("Java");  
         break;
                  
       default:
         printf("core2web");  
         break;
   }
}
