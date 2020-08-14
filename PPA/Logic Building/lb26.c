#include<stdio.h>
void main()
{
    int num;
    int flag=0;
    
    printf("Enter number=\n");
    scanf("%d",&num);
    
    for(int i=2;i<num/2;i++)
    {
       if(num%i==0)
       {
          flag=1;
          
       }
    }
    if(flag==1)
    {
       printf("%d is not a prime number\n",num);
    }
    else
    {
     printf("%d is not a prime number\n",num);   
    }
    
}
