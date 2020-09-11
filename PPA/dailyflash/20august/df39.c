#include<stdio.h>
int main()
{
    int x=1;
    int n;
    printf("Enter number of rows=\n");
    scanf("%d",&n);
    
    for(int row=1;row<=n;row++)
    {
       for(int col=1;col<=n;col++)
       {
          printf("%d\t",x);
          x++;
       }
       printf("\n");
    }
    return 0;
}
/*
\Enter number of rows=
4
1	2	3	4	
5	6	7	8	
9	10	11	12	
13	14	15	16
*/

