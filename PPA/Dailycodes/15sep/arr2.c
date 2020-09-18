#include<stdio.h>
int main(){

     int array[5]={10,20,30,40,50,};
     
     printf("%p\n",&array);
     
     printf("%p\n",&array[0]);
     printf("%p\n",&array[1]);
     printf("%p\n",&array[2]);
     printf("%p\n",&array[3]);
     printf("%p\n",&array[4]);
     
     return 0;
}
/*
0x7ffe85c0b2d0
0x7ffe85c0b2d0
0x7ffe85c0b2d4
0x7ffe85c0b2d8
0x7ffe85c0b2dc
0x7ffe85c0b2e0

*/
