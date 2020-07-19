#include<stdio.h>
void main()
{
   int i=1,sum=0,num;
   printf("Enter number:\n");
   scanf("%d",&num);
   
   while(i<=num)
   {
     sum=sum+i;
     i++;
   }
   printf("Sum of all natural number between 1 to 10=%d\n",sum);
}




