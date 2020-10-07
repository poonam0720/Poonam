#include<stdio.h>
int main() {

     int a=10, b=20, c=30;
     
     int *ptr1=&a;
     int *ptr2=&b;
     int *ptr3=&c; 
     
     int** pptr1 = &ptr1;
     int** pptr2 = &ptr2;
     int** pptr3 = &ptr3;     
     
   
     
    //address
     
     printf("%p\n",arrptr[0]);  // 400
     printf("%p\n",arrptr[1]);  //408
     printf("%p\n",arrptr[2]);  //416
     
     printf("\n");
     
     //value
     printf("%d\n",*(arrptr[0]));  // 10
     printf("%d\n",*(arrptr[1]));  //20
     printf("%d\n",*(arrptr[2]));  //30
     
     printf("\n");
     
     //value
     printf("%d\n",*(*(arrptr + 0)));  // 10
     printf("%d\n",*(*(arrptr + 1)));  //20
     printf("%d\n",*(*(arrptr + 2)));  //30   
     
     
   
     
     return 0;
}
/*
0x7ffdb9a392dc
0x7ffdb9a392e0
0x7ffdb9a392e4

10
20
30

10
20
30

*/
