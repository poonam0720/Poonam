#include<stdio.h>
void main()
{
    int i=1;
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    
    while(num>=i)
    {
      if(num%2==0)
      {
         printf("%d\n",num);
      }
      else
      {
         printf("%d\n",num);
         num=num-1;
      }
      num--;
    }
}






