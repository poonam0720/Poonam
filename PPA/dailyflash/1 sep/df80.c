#include<stdio.h>
int main()
{
    int num1,num2,res;
    
    printf("Enter number1:\n");
    scanf("%d",&num1);
    printf("Enter number2:\n");
    scanf("%d",&num2);
    
    if(num1>num2)
    {
        res=num1;
    }
    else
    {
        res=num2;
    }
    
    printf("The maximum number amongst %d and %d is %d \n",num1,num2,res);
    return 0;
}
/*
Enter number1:
56
Enter number2:
99
The maximum number amongst 56 and 99 is 99 

*/
