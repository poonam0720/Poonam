#include<stdio.h>
int main()
{
   int a=1;  
   float b=67.6;
   char c='A';
   double dt=767676767;
   
   
   
   if(sizeof(a)==4)
   {
       printf("variable a is of type integer datatype\n");
   }
    if(sizeof(b)==4)
   {
       printf("variable b is of type float  datatype\n");
   }
    if(sizeof(c)==1)
   {
       printf("variable c is of type character  datatype\n");
   }
    if(sizeof(dt)==8)
   {
       printf("variable dt is of type double  datatype\n");
   }
   return 0;
}

/*
variable a is of type integer datatype
variable b is of type float  datatype
variable c is of type character  datatype
variable dt is of type double  datatype

*/
