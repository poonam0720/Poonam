#include<stdio.h>
int main()
{
   char ch;
   do
   {
      int i,n,sum=0;
      
      printf("Enter number=\n");
      scanf("%d",&n);
      
      for(i=1;i<n;i++)
      {
         if(n%i==0)
         sum=sum+i;
      }
      if(sum==n)
      {
         printf("%d is perfect number\n",n);
      }
      else
      {
         printf("%d is not perfect number\n",n);
      }
      printf("Do you want to continue?\n");
      scanf(" %c",&ch);
   }while(ch=='y'||ch=='Y');
   return 0;
}
/*

Enter number=
6
6 is perfect number
Do you want to continue?
y
Enter number=
12
12 is not perfect number
Do you want to continue?
n

*/
