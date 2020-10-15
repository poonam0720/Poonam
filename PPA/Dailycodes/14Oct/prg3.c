//call by address
#include<stdio.h>

void swap(int *a, int *b){

      *a = *a + *b;
      *b = *a - *b;
      *a = *a - *b;
}

void main() {

     int a = 10, b = 5;
     
     printf("%d %d\n",a,b);  //10  5
     
     swap(&a,&b);
     
     printf("%d %d\n",a,b);  // 5 10
}
/*
10 5
5 10

*/
