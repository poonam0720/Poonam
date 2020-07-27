#include<stdio.h>
void main()
{
    int n;
    printf("Enter number=\n");
    scanf("%d",&n);
    
    for(int row=1;row<=n;row++)
    {
       
       for(int space=n;space>row;space--)
       {
          printf("- ");
       }
       int fact=1;
       for(int col=1;col<=row;col++)
       {
          fact=fact*col;
          printf("%d ",fact);
       }
       printf("\n");
    }
}

/* Output:

 Enter number=
5
- - - - 1 
- - - 1 2 
- - 1 2 6 
- 1 2 6 24 
1 2 6 24 120 

*/
