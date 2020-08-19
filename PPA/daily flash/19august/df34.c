#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows=\n");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)  
    {
       for(int col=1;col<=n;col++)
       {
          printf("%d ",col);
       }
       printf("\n");
    }
}
/*
Enter number of rows=
4
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 

*/
