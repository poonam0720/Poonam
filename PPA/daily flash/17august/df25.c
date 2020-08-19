#include<stdio.h>
int main()
{
  int n1;
  printf("Enter number=\n");
  scanf("%d",&n1);
  
  if(n1%5==0 && n1%11==0)
  {
     printf("%d is divisible by 5 and 11\n",n1);
  }
  else
  {
     printf("%d is not divisible by 5 and 11\n",n1);
  }
  return 0;
}

/*
Enter number=
55
55 is divisible by 5 and 11

*/
