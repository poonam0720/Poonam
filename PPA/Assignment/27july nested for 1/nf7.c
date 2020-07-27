#include<stdio.h>
void main()
{
    for(int row=1;row<=5;row++)
    {
       for(int space=1;space<row;space++)
       {
          printf("- ");
       }
       for(int col=row;col<=5;col++)
       {
          printf("* ");
       }
       printf("\n");
    }
}
