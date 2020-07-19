#include<stdio.h>
void main()
{
  float pi=3.14,Area,Circumference;
  int r;
  
  printf("Enter radius of a circle:\n");
  scanf("%d",&r);
  
  Area=pi*r*r;
  Circumference=2*pi*r;
  
  printf("Area of a circle=%.2f\n",Area);
  printf("circumference of a circle%.2f\n",Circumference);
}
