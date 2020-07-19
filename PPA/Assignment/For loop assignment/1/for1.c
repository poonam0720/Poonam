#include<stdio.h>
void main()
{
    int x;
    printf("Enter number to print table:\n");
    scanf("%d",&x);
    
    for(int i=3;i<=10;i++)
    {
       printf("%d\n",x*i);
    }
}


