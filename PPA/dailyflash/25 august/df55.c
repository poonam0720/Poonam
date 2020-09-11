#include<stdio.h>
int main()
{
   int n;
   printf("Enter number of row=\n");
   scanf("%d",&n);
   
   for(int row=1;row<=n;row++)
   {
       for(int col=1;col<=n;col++)
       if(row==2||row==4)
       {
           printf("1 ");
       }
       else
       {
           printf("0 ");
       }
       printf("\n");
   }
   return 0;
}
/*
Enter number of row=
4
0 0 0 0 
1 1 1 1 
0 0 0 0 
1 1 1 1 

*/
