#include<stdio.h>
void main()
{
  int a;
  float x;
  char ch;
  
     printf("Enter character value:\n");
     scanf("%c",&ch);
     printf("Enter integer value:\n");
     scanf("%d",&a);
     printf("Enter float value:\n");
     scanf("%f",&x);
  
     printf("%d is integer value\n",a);
     printf("%.2f is float value\n",x);
     printf("%c is character\n",ch);

}
