#include<stdio.h>
int main()
{
    int n,x=7;
    
    printf("Enter number of rows=\n");
    scanf("%d",&n);
    
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            printf("%d ",x);
            x--;
        }
        x++;
        printf("\n");
    }
}
/*
Enter number of rows=
4
7 
7 6 
6 5 4 
4 3 2 1 

*/
