#include<stdio.h>
int main()
{
    int n,x1,x=7;
    
    printf("Input=\n");
    scanf("%d",&n);
    
    x1=n*2-1;
    for(int row=1;row<=n;row++)
    {
          x=x1;
        for(int col=1;col<=row;col++)
        {
          
            printf("%d ",x);
            x--;
        }
  
             x1--;
        printf("\n");
    }
    return 0;
}
/*
Input=
5
9 
8 7 
7 6 5 
6 5 4 3 
5 4 3 2 1 

*/
