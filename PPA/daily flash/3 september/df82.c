#include<stdio.h>
int main()
{
    int n1,n2,fact=1;
    
    printf("Enter number1=\n");
    scanf("%d",&n1);
    printf("Enter number2=\n");
    scanf("%d",&n2);
    
    if(n1<0)
    {
       printf("Error!\n");
    }
    else
    {
         for(int i=n1;i<=n2;i++)
         {
             fact=fact*i;
         }
         printf("Factorial of %d=%d\n",i,fact);
    }
    return 0;
}
