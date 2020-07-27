#include<stdio.h>
void main()
{
    int n;
    printf("Enter number=\n");
    scanf("%d",&n);
    
    for(int row=n;row>=1;row--)
    {
       for(int space=n;space>row;space--)
       {
          printf("- ");
       }
       for(int col=1;col<=row;col++)
       {
           printf("%d ",row);
       }
       printf("\n");
    }
}

/*  Output:

Enter number=
4
4 4 4 4 
- 3 3 3 
- - 2 2 
- - - 1 


*/
