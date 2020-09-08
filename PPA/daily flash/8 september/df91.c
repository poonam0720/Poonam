#include<stdio.h>
int main()
{
   int n;
   
   printf("Enter number=\n");
   scanf("%d",&n);
   
   for(int i=1;i<=100;i+=n)
   {
       printf("%d ",i);
   }
   return 0;
}
/*
Enter number=
15
1 16 31 46 61 76 91
*/
