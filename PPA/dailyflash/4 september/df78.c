#include<stdio.h>
int main()
{
     int n,x=3,n1=2;
     
     printf("Enter number of rows=\n");
     scanf("%d",&n);
     
     for(int row=1;row<=n;row++)
     {
         
         for(int col=1;col<=row;col++)
         {
             printf("%d ",x);
             x++;
         }
         
         x=x-n1;
         n1++;
         printf("\n");
     }
}
/*
Enter number of rows=
4
3 
2 3 
1 2 3 
0 1 2 3 
*/
