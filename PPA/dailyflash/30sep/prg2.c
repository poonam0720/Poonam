#include<stdio.h>
int main(){

      int arr1[] = {10,20,30,40,50};
      
      float arr2[] = {10.5,20.5,30.5,40.5,50.5};
      
      char arr3[] = {'A','B','C','D','E','F'};
      
      int *iptr1 = &(arr1[3]);
      
      float *iptr2 = &(arr2[2]);
      
      char *iptr3 = &(arr3[3]);
      
      iptr1 = iptr1 + 1;
      printf("%d\n",*iptr1);//50
      
      iptr1 = iptr1 - 1;
      printf("%d\n",*iptr1);//40
      
      iptr2 = iptr2 + 1;
      printf("%.2f\n",*iptr2);//40.50
      
      iptr2 = iptr2 - 1;
      printf("%.2f\n",*iptr2);//30.50
      
      iptr3 = iptr3 + 1;
      printf("%c\n",*iptr3);//E
      
      iptr3 = iptr3 - 1;
      printf("%c\n",*iptr3);//D
      
      return 0;
      
}

/*
50
40
40.50
30.50
E
D

*/
