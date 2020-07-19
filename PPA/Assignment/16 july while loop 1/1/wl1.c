#include<stdio.h>
void main()
{
  int i=1,n,sum=0,odd=1;
  printf("Enter number:\n");
  scanf("%d",&n);

  while(i<=n)
  {
    if(i%2==0)
    {
       sum=sum+i;
       
       
    }
    else
    {
      odd=odd*i;

    }
    i++;
  }
  printf("Sum of all even numbers=%d\n",sum);
  printf("Multiplication of all numbers:%d\n",odd);
}


