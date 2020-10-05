#include<stdio.h>
int main()  {

      int a = 10;
      int b = 20;
      int c = 30;
      
      int *ptr1 = &a;
      int *ptr2 = &b;
      int *ptr3 = &c;
      
      int* aptr[] = {ptr1, ptr2, ptr3} ;
      
      return 0;
}
