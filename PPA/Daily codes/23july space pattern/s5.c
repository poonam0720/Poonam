/*        1
        1 2
      1 2 3
    1 2 3 4 */
      
#include<stdio.h>
void main()
{
     for(int outer=1;outer<=4;outer++)
     {
        for(int space=3;space>=outer;space--)
        {
            printf("  ");
        }
        for(int inner=1;inner<=outer;inner++)
        {
            printf("%d ",inner);
        }
        printf("\n");
     }
}
