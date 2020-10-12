#include<stdio.h>
int main() {

      float x1 = 23.4000;
      float x2 = 43.2300;
      float x3 = 32.2200;
      float x4 = 68.2100;
      float x5 = 9.8000;
      
      float *ptr1 = &x1;
      float *ptr2 = &x2;
      float *ptr3 = &x3;
      float *ptr4 = &x4;
      float *ptr5 = &x5;
      
      float* arr1[5] = {ptr1,ptr2,ptr3,ptr4,ptr5};
      
      printf("Output=\n");
      
      for(int itr=0; itr<5; itr++){
      
           printf("Element %d = %f\n",itr,*(*(arr1 + itr)));
      }
      
      printf("\n");
      
      float max  = 0.0;
      int index;
      
      for(int itr=0; itr<5; itr++){
      
           if(*(*(arr1 + itr)) > max){
           
                max = *(*(arr1 + itr));
                
                index = itr;
           }
      }
      
      printf("Biggest value is %f and its index is %d\n",max,index);
      
      printf("\n");
      
      
}

/*
Output=
Element 0 = 23.400000
Element 1 = 43.230000
Element 2 = 32.220001
Element 3 = 68.209999
Element 4 = 9.800000

Biggest value is 68.209999 and its index is 3


*/
