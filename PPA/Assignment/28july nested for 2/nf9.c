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
       for(int col=1;col<=row;col++)
       {
          printf("%d ",col);
       }
       printf("\n");
    }
}

/*  Output:

Enter number=
5
- - - - 1 
- - - 1 2 
- - 1 2 3 
- 1 2 3 4 
1 2 3 4 5 

*/
