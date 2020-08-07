#include<stdio.h>
void main()
{
   int x;
   int i=2;
   printf("Enter number=\n");
   scanf("%d",&x);
   
   do
   {
     
      if((x%i)!=0)
      {
         break;
        
      }
      else
      {
         printf("number is not  prime number=%d",x);
         i++;
      }
    
   }while(i<x);

}
/* example1:entered number is prime.
Enter number=
3

*/

/*example2: entered number is not prime.
Enter number=
32    
number is not  prime number=32

*/
