//function calling function

#include<stdio.h>

void add(int, int);
void sub(int, int);
void funcallingfun(int, int, void(*)(int, int));

void main() {

      int a=10, b=20;
      
   //   funcallingfun(a,b,add);     //Add=30
      funcallingfun(a,b,sub);     //Sub=-10

}

void funcallingfun(int x, int y, void(*fptr)(int,int))  {

         fptr(x,y);
}

void add(int x, int y)  {

       printf("Add=%d\n",x + y);   // Add=30
}

void sub(int x, int y)  {

       printf("Sub=%d\n",x - y);   //Sub=-10
}
