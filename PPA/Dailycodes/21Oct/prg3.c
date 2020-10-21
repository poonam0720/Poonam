#include<stdio.h>

void add(float, float);
void sub(float, float);

void main()  {

    void (*fptr)(float,float);
    
     fptr = sub;
    
     fptr = &sub;
   
   (*fptr) (20.5f,10.5f);

}

void add(float x, float y)  {

      printf("Addition = %f\n",x + y);  
}


void sub(float x, float y)  {

      printf("Subtraction = %f\n",x - y);  //Subtraction = 10.000000


}


