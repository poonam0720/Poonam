/*              1 
              1 2 3 
            1 2 3 4 5 
          1 2 3 4 5 6 7 
        1 2 3 4 5 6 7 8 9 
*/

#include<stdio.h>
void main()
{
   int n;
   printf("Enter number=\n");
   scanf("%d",&n);
   for(int row=1;row<=n;row++)
   {
     for(int space=n-1;space>=row;space--)
     {
        printf("  ");
     }
     int x=1;
     for(int col=1;col<=row*2-1;col++)
     {
        printf("%d ",x);
        x++;
     }
     printf("\n");
   }
}

/*   OUTPUT:

Enter number=
5
        1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 

*/
