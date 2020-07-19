#include<stdio.h>
void main()
{
    printf("Divisor of 50:\n");
    for(int i=1;i<=50;i++)
    {
       if(50%i==0)
       {
         printf("%d\n",i);
       }
    }
}    


