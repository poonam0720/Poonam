#include<stdio.h>
int main(){

      int array1[]={10,'A',20,'C',30};
      
      printf("%ld\n",sizeof(array1));//20
      
      int array2[]={'a','b','c','d','e'};
      
      printf("%ld\n",sizeof(array2));//20
      
      int array3[]={10.5,20.5,30.5,40.5,50.5};

      printf("%ld\n",sizeof(array3));//20
      
      return 0;
}
/*
20
20
20
*/
