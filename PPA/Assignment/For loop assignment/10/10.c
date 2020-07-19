#include<stdio.h>
void main()
{
  int x;
  
  printf("Enter number=\n");
  scanf("%d",&x);
  
  for(int i=1;i<=65;i++)
  {
     if(65%i==0)
     printf("%d\n",i);
  }
}

