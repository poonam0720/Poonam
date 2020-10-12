#include<stdio.h>
int main() {

      int x1 = 10,x2 = 20,x3 = 30,x4 = 40;
      
      int *ptr1 = &x1;
      int *ptr2 = &x2;
      int *ptr3 = &x3;
      int *ptr4 = &x4;
      
      
      int* arr1[4] = {ptr1,ptr2,ptr3,ptr4};
      
      for(int itr=0; itr<4;itr++){
      
      printf("%ld\n",sizeof(*(*(arr1 + itr))));
      }
      
      return 0;
}
/*

4
4
4
4

*/
