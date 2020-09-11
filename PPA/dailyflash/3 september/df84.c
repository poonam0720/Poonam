#include<stdio.h>
int main()
{
     int n;
     
     printf("Enter number of rows=\n");
     scanf("%d",&n);
     
     int x=1;
     for(int row=1;row<=n;row++)
     {
        for(int col=1;col<=row;col++)
        {
            printf("%d\t",x*x*x);
            x++;
        }
        printf("\n");
     }
     return 0;
}
/*
Enter number of rows=
4
1	
8	27	
64	125	216	
343	512	729	1000
*/
