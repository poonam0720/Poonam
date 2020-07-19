#include<stdio.h>
void main()
{
   int i=0,num;
   printf("Enter number of days to complete the assignment:\n");
   scanf("%d",&num);
   
   while(i<=num)
   {
     printf("%d days remaining\n",num);
     num--;
   }
  
}
