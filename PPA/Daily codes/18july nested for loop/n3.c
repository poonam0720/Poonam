#include<stdio.h>
void main()
{
   int row=0;
   int column=0;
   
   printf("Enter rows and columns=\n");
   scanf("%d %d",&row,&column);
   for(int i=1;i<=row;i++)
   {
       for(int j=1;j<=column;j++)
       {
           printf("* ");
       }
       printf("\n");
   }
}
