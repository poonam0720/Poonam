#include<stdio.h>
void min();
void max();
void sum();
void display();

void main()  {

      int num1,num2;
      
      printf("Enter two numbers=\n");
      scanf("%d %d",&num1,&num2);
      
      void (*vptr1)(int,int);
      void (*vptr2)(int,int);
      void (*vptr3)(int,int);
      void (*vptr4)(int,int);
      
      vptr1 = min;
      vptr1(num1,num2);
      
      vptr2 = max;
      vptr2(num1,num2);
      
      vptr3 = sum;
      vptr3(num1,num2);
      
      vptr4 = display;
      vptr4(num1,num2);
      
      
}

void min(int x, int y)  {

     int min;
     
     if(x < y)   {
     
         min = x;
     }
     else {
     
         min = y;
     }
     
     printf("Minimum value=%d\n",min);
}

void max(int x, int y)  {

     int max;
     
     if(x > y)   {
     
         max = x;
     }
     else {
     
         max = y;
     }
     
     printf("Maximum value=%d\n",max);
}

void sum(int x, int y)  {

     int add = x + y;
     
     printf("Sum of numbers=%d\n",add);
}

void display(int x, int y)  {

     printf("Number1 = %d\n",x);
     printf("Number2 = %d\n",y);
}

/*

Enter two numbers=
2
4
Minimum value=2
Maximum value=4
Sum of numbers=6
Number1 = 2
Number2 = 4


*/
