#include<stdio.h>
void main()
{
  int n;
  int count=0;
  printf("Enter number:\n");
  scanf("%d",&n);
  
  while(n>0)
  {
    n=n/10;
    count++;
  }
  printf("Number of digits:%d\n",count);
}
