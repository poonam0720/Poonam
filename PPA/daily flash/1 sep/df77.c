#include<stdio.h>
int main()
{
    int num1,num2,temp;
    
    printf("Enter number 1:\n");
    scanf("%d",&num1);
    printf("Enter number 2:\n");
    scanf("%d",&num2);
    
    printf("Before swap:%d %d\n",num1,num2);
    
    temp=num1;
    num1=num2;
    num2=temp;
    
    printf("After swap:%d %d\n",num1,num2);
    
    return 0;
}
/*
Enter number 1:
20
Enter number 2:
30
Before swap:20 30
After swap:30 20

*/
