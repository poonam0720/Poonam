#include<stdio.h>
void main()
{
    int i=1,j=3;
    int n;
    printf("Enter number of rows=\n");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int space=1;space<row;space++)
        {
           printf("  ");
        }
        for(int col=row;col<=n;col++)
        {
           printf("%d ",i);
           i++;
        }
        i=i-j;
        j=j-1;
        printf("\n");
    }
}

/* OUTPUT:
Enter number of rows=
5
1 2 3 4 5 
  3 4 5 6 
    5 6 7 
      7 8 
        9 
*/
