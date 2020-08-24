#include<stdio.h>
int main()
{
   int n,sum=0;
   
   printf("Enter number=\n");
   scanf("%d",&n);
   
   for(int i=1;i<=n;i++)
   {
       sum=sum+i;
   }
   printf("Sum of the first %d natural number is %d\n",n,sum);
   return 0;
}
/*
Enter number=
10
Sum of the first 10 natural number is 55

*/
