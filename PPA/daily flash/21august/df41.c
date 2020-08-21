#include<stdio.h>
int main()
{
   int r;
   float pi=3.14;
   float Area_of_circle;
   
   printf("Enter radius=\n");
   scanf("%d",&r);
   
   Area_of_circle=pi*r*r;
   
   printf("Area of circle=%.2f\n",Area_of_circle);
   return 0;
}
/*
Enter radius=
4
Area of circle=50.24

*/

