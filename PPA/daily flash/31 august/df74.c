#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter number of rows=\n");
    scanf("%d",&n);
    
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            if(row%2==0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
Enter number of rows=
5
0 
1 1 
0 0 0 
1 1 1 1 
0 0 0 0 0 

*/
