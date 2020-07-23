/*        D
        C D
      B C D
    A B C D */
      
#include<stdio.h>
void main()
{
       
     for(int outer=68;outer>=65;outer--)
     {
        for(int space=outer;space>=65;space--)
        {
            printf("  ");
        }

              
        for(char inner=outer;inner<=68;inner++)
        {
            printf("%c ",inner);
            
            
        }
        
        printf("\n");
     }
}
