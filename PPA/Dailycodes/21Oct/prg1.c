#include<stdio.h>

void add(int, int);
void sub(int, int);

void main()  {

    void (*fptr)(int,int);
    
    //fptr = add;
    
     fptr = &add;
   
   (*fptr) (10,20);
    
   // fptr(10,20);
    
    
}

void add(int x, int y)  {

      printf("Addition = %d\n",x + y);   //Addition = 30
}


void sub(int x, int y)  {

      printf("Subtraction = %d\n",x - y);
}
