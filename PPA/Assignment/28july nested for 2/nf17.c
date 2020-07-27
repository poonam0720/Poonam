#include<stdio.h>
void main()
{
    int n;
    printf("Enter number=\n");
    scanf("%d",&n);
    for(int row=n;row>=1;row--)
    {
       for(int space=1;space<row;space++)
       {
           printf("  ");
       }
       char ch='a';
       for(int col=row;col<=n;col++)
       {
           printf("%c ",ch);
           ch++;
           
       }
       printf("\n");
    }
}

/* Output:
Enter number=
5
        a 
      a b 
    a b c 
  a b c d 
a b c d e 

*/
