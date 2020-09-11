#include<stdio.h>
int main()
{
    int n;
    printf("Input=");
    scanf("%d",&n);
    printf("\n");
    
    for(int row=1;row<=n;row++)
    {
        for(int col=n;col>=row;col--)
        {
             if(col%2==0)
             {
                 printf("= ");
             }
             else
             {
                 printf("+ ");
             }
        }
        printf("\n");
    }
    return 0;
}
/*
Input=4

= + = + 
= + = 
= + 
= 

*/
