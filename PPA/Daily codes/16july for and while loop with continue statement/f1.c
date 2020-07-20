#include<stdio.h>
void main()
{
  int num=0,sum=0,rem=0;
  
  printf("Enter number=\n");
  scanf("%d",&num);
  
  while(num!=0)
  {
     rem=num%10;
     sum=sum+rem;
     num=num/10;
  }
  
  printf("Sum=%d\n",sum);
}
