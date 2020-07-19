#include<stdio.h>
void main()
{
   int x,min,hr;
 
   printf("Enter minutes:\n");
   scanf("%d",&x);
   
   hr=(x/60);
   min=(x%60);
   
   printf("%d hours,%d minutes\n",hr,min);
}
