#include<stdio.h>
int main()
{
   char ch;
   do
   {
   int n,i,fact,rem;
   printf("Enter number=\n");
   scanf("%d",&n);
   
   int sum=0;
   int temp=n;
   while(n)
   {
      i=1;
      fact=1;
      rem=n%10;
      while(i<=rem)
      {
        fact=fact*i;
        i++;
      }
      sum=sum+fact;
      n=n/10;   
   }
   if(sum==temp)
   {
       printf("%d is a strong number\n",temp);
   }
   else
   {
       printf("%d is not a strong number\n",temp);
   }
   printf("Do yo want to continue?\n");
   scanf(" %c",&ch);
  }while(ch=='y'||ch=='Y');
   return 0;
}


/*
Enter number=
124
124 is not a strong number
Do yo want to continue?
y
Enter number=
145
145 is a strong number
Do yo want to continue?
n

*/
