#include<stdio.h>
int main()
{
    int n,x=1;
    
    printf("Enter number of rows=\n");
    scanf("%d",&n);
    
    for(int row=1;row<=n;row++)
    {
       for(int col=1;col<=row;col++)
       {
           printf("%d ",x*x);
           x++;
       }
       printf("\n");
    }
    return 0;
}
/*
Enter number of rows=
4
1 
4 9 
16 25 36 
49 64 81 100 
*/
