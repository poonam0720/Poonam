#include<stdio.h>
void main()
{
    int n;
    int i=1;
    printf("Enter number=\n");
    scanf("%d",&n);
    for(int row=n;row>=1;row--)
    {
       for(int space=n;space>row;space--)
       {
           printf("  ");
       }
       for(int col=1;col<=row;col++)
       {
           printf("%d ",i);
           i++;
           
       }
       printf("\n");
    }
}

/*  Output:

Enter number=
4
1 2 3 4 
  5 6 7 
    8 9 
     10 

*/
