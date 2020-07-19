#include<stdio.h>
void main()
{
   double x,y,add,sub,mul,div;
 
   printf("Enter num1:\n");
   scanf("%lf",&x);
   printf("Enter num2:\n");
   scanf("%lf",&y);
   
   printf("Number1=%.2f\n",x);
   printf("Number2=%.2f\n",y);
   
   add=x+y;
   sub=x-y;
   mul=x*y;
   div=x/y;
   
   printf("Their addition=%.2f\n",add);
   printf("Their subtraction=%.2f\n",sub);
   printf("Their multiplication=%.2f\n",mul);
   printf("Their division=%.2f\n",div);
}






