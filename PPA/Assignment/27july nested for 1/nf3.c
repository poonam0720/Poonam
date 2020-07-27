#include<stdio.h>
void main()
{
   int n;
   int fact=1;
   printf("Enter number=\n");
   scanf("%d",&n);
    
   for(int i=1;i<=n;i++)
   {
       fact=fact*i;
      printf("%d\t",fact);
      
   }
}
