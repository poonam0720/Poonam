#include<stdio.h>
int main()
{
     int n;
     printf("Enter number of rows=\n");
     scanf("%d",&n);
     
     int x=1;
     
     for(int row=1;row<=n;row++)
     {
          for(int col=1;col<=row;col++)
          {
             printf("%d ",x);
             x++;
          }
          printf("\n");
     }
     return 0;
}
/*
Enter number of rows=
4
1 
2 3 
4 5 6 
7 8 9 10 

*/
