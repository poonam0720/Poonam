#include<stdio.h>
int main(){

      int arr1[] = {10,20,30,40,50};
      int arr2[] = {60,70,80};
      
      int *iptr1 = arr1;
      int *iptr2 = &arr1;
      int *iptr3 = arr2;
      
      printf("%p\n",iptr1);//100
      printf("%p\n",iptr2);//100
      printf("%p\n",iptr3);//120
      
   
     // printf("%d\n",*iptr1);
      
      iptr2 = iptr2 + 1;
      
      printf("%d\n",*iptr2);
     
      return 0;
}
