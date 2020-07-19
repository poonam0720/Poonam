#include<stdio.h>
void main()
{
   int a,b;
   printf("Enter a number:\n");
   scanf("%d",&a);
   
   printf("Enter a number:\n");
   scanf("%d",&b);
   
   for(int i=a;i<=60;i++)
   {
     if(i%6==0)
     {
        printf("%d\n",i);
     }
   }
}

