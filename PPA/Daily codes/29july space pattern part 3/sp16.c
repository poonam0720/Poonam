#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of rows=\n");
    scanf("%d",&n);
     for(int row=1;row<=n;row++)
     {
        
        int x=1;
        for(int space=n-1;space>=row;space--)
        {
           printf("  ");
        }
        for(int col=1;col<=2*row-1;col++)
        {
             printf("%d ",x);
             if(row==col||x<col)
             {
               x--;
             }
             else
             {
              x++;
             }
        }
        printf("\n");
     }
}

/*
Enter number of rows=
4
      1 
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1 

*/
