#include<stdio.h>
int main(){

      int arr1[] = {10,20,30,40,50};
      int arr2[] = {60,70,80};
      
      int *iptr1 = arr1 + 1;
      int *iptr2 = &arr1 + 1;
      
      
      printf("%p\n",iptr1);//100
      printf("%p\n",iptr2);//104
 
      
      printf("%d\n",*iptr1);//10
      printf("%d\n",*iptr2);//garbage
     

     
      return 0;
}
/*
0x7ffc7cefb814
0x7ffc7cefb824
20
32764

*/
