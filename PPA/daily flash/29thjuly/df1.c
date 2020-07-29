#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of rows=\n");
    scanf("%d",&n);
   for(int row=1;row<=n;row++)
   {
       for(int space=1;space<row;space++)
       {
           printf("  ");
       }
       for(int col=row;col<=n;col++)
       {
           printf("%d ",row*col);
       }
       printf("\n");
   }
}
/*  OUTPUT=

Enter number of rows=
5
1 2 3 4 5 
  4 6 8 10 
    9 12 15 
      16 20 
        25 
        
*/
