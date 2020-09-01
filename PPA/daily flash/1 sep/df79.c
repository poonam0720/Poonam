#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            if(row%2==0)
            {
                 printf("A ");
            }
            else
            {
                 printf("a ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
Enter number of rows:
5
a 
A A 
a a a 
A A A A 
a a a a a
*/
