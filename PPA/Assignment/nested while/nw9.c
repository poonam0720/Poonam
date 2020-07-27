/*        1
         1 0
        1 0 1
       1 0 1 0
      1 0 1 0 1   */
      
      
#include<stdio.h>
void main()
{
    int row=1;
    int n;
    
    printf("Enter number=\n");
    scanf("%d",&n);
    while(row<=n)
    {
        int space=4;
        while(space>=row)
        {
           printf(" ");
           space--;
        }
        int col=1;
        while(col<=row)
        {
            if(col%2==0)
            {
                printf(" 0");
            }
            else
            {
                printf(" 1");
            }
            col++;
        }
        printf("\n");
        row++;
    }
    
}
