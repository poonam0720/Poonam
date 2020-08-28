#include<stdio.h>
int main()
{
    int n,i;
    int fact=1;
    
    printf("Enter number=\n");
    scanf("%d",&n);
    
    if(n<0)
    {
        printf("Error!\n");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of %d is %d\n",n,fact);
    }
    return 0;
}
/*
Enter number=
5
Factorial of 5 is 120

*/
