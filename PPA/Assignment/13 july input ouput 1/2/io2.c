#include<stdio.h>
void main()
{
  int hr,min,total;
  
  printf("Enter hours:\n");
  scanf("%d",&hr);
  printf("Enter minutes:\n");
  scanf("%d",&min);
  
  total=(hr*60)+min;
  
  printf("total minutes=%d minutes\n",total);
}
