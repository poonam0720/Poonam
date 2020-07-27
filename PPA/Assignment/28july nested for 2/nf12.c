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
           printf(" ");
       }
       for(int col=1;col<=row;col++)
       {
           
           printf("%d ",i);
           i=i+2;
       }
       printf("\n");
    }
}

/*   Output:

Enter number=
5
1 3  5  7   9 
  11 13 15 17 
    19 21 23 
      25 27 
        29 

   */
