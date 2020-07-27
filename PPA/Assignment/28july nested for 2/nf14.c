#include<stdio.h>
void main()
{
    int n;
    int i;
    int cnt=1;
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
           i=2*cnt;
           printf("%d ",i);
           cnt++;
           
       }
       printf("\n");
    }
}

/*  Output:

Enter number=
4
   2 4 6 8 
  10 12 14 
     16 18 
        20 

*/
