#include<stdio.h>
void main()
{
    for(int row=1;row<=3;row++)
    {
        for(int col=1;col<=5;col++)
        {
           if(col%2==0)
           {
               printf("_ ");
           }
           else
           {
               printf("* ");
           }
        }
        printf("\n");
    }
}
