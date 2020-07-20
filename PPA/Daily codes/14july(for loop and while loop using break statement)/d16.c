#include<stdio.h>
void main()
{
    int num=0;
    for(int i=1;i<=10;i++)
    {
     printf("Enter even number=\n");
     scanf("%d",&num);
     if(num%2==0)
        printf("%d is even number\n",num);
     else   
        break;
    }
    printf("Out of loop\n");
}
