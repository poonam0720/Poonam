#include<stdio.h>
void main()
{
    int i=1;
    for(int row=1;row<=3;row++)
    {
       for(int col=1;col<=3;col++)
       {
           printf("%d",i);
           i++;
       }
       printf("\n");
    }
}
