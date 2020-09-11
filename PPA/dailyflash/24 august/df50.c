#include<stdio.h>
int main()
{
     int n;
     printf("Enter number of rows=\n");
     scanf("%d",&n);
     
     for(int row=1;row<=n;row++)
     {
         for(int col=1;col<=n;col++)
         {
             printf("0 ");
         }
         printf("\n");
     }
     return 0;
}
/*
Enter number of rows=
4
0 0 0 0 
0 0 0 0 
0 0 0 0 
0 0 0 0 

*/
