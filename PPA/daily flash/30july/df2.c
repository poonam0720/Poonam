#include<stdio.h>
void main()
{
   int n;
   printf("Enter number=\n");
   scanf("%d",&n);
   char ch='A';
   for(int row=1;row<=n;row++)
   {
       for(int space=n-1;space>=row;space--)
       {
          printf("  ");
       }
       for(int col=1;col<=row*2-1;col++)
       {
          printf("%c ",ch);
       }
       ch++;
       printf("\n");
   }
}

/*   OUTPUT:

Enter number=
5
        A 
      B B B 
    C C C C C 
  D D D D D D D 
E E E E E E E E E 

*/
