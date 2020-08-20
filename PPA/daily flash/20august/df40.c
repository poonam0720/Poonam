#include<stdio.h>
int main()
{
  int phy,chem,bio,math,comp;
  float per;
  
  printf("Enter marks of physics=\n");
  scanf("%d",&phy);
  
  printf("Enter marks of chemistry\n");
  scanf("%d",&chem);
  
  printf("Enter marks of biology\n");
  scanf("%d",&bio);
  
  printf("Enter marks of mathematics\n");
  scanf("%d",&math);
  
  printf("Enter marks of computer=\n");
  scanf("%d",&comp);
  
  
  per=(phy+chem+bio+math+comp)/5.0;
  printf("Percentage=%.2f\n",per);
  
  
  if(per>=90)
  {
     printf("Grade A\n");
  }
  else if(per>=80)
  {
     printf("Grade B\n");
  }
  else if(per>=70)
  {
     printf("Grade c\n");
  }
  else if(per>=60)
  {
     printf("Grade D\n");
  }
  else if(per>=40)
  {
     printf("Grade E\n");
  }
  else if(per<40)
  {
     printf("Fail\n");
  }
  return 0;
}

/*
Enter marks of physics=
90
Enter marks of chemistry
90
Enter marks of biology
90
Enter marks of mathematics
90
Enter marks of computer=
90
Percentage=90.00
Grade A

*/
