#include<stdio.h>
void main()
{
    for(int row=1;row<=4;row++)
    {
        for(int col=row;col<row+4;col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}
