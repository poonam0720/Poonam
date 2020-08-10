#include<stdio.h>
void main()
{
   int i=0;
   do
   {
       i++;
       if(i==3)   
           continue;
       printf("In loop ");
   }while(i<3);
   printf("%d\n",i);
}
/*  In loop In loop 3

