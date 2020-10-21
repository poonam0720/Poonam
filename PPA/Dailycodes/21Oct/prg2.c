#include<stdio.h>

void add(int, int);
void sub(int, int);

void main()  {

    void (*fptr)(int,int);
    
     fptr = sub;
    
     fptr = &sub;
   
   (*fptr) (20,10);
    
   // fptr(20,10);
    
    
}

void add(int x, int y)  {

      printf("Addition = %d\n",x + y);  
}


void sub(int x, int y)  {

      printf("Subtraction = %d\n",x - y);  //Subtraction = 10

}


