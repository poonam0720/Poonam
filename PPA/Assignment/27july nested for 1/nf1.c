#include<stdio.h>
void main()
{
    for(int row=1;row<=5;row++)
    {
        char ch='A';
        for(int col=1;col<=5;col++)
        {
           printf("%c ",ch);
           ch++;
        }
        printf("\n");
    }
}
