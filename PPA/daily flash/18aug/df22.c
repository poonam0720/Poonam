#include<stdio.h>
int main()
{
   int n1;
   printf("Enter number=\n");
   scanf("%d",&n1);
   
   if(n1<0)
   {
      printf("%d is negative\n",n1);
   }
   if(n1>0)
   {
      printf("%d is positive\n",n1);
   }
   if(n1==0)
   {
      printf("%d is equal to 0\n",n1);
   }
   
   return 0;
}
/*
Enter number=
-2
-2 is negative

*/
