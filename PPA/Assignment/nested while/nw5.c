/*         a
          a b
         a b c
        a b c d   */
        
        
#include<stdio.h>
void main()
{
    int row=1;
    
    while(row<=4)
    {
        int space=3;
       while(space>=row)
       {
          printf(" ");
          space--;
       }
       
        int col=1;
        char ch='a';
        while(col<=row)
        {
           printf("%c ",ch );
           ch++;
           col++;
        }
        printf("\n");
        row++;
    }
}
