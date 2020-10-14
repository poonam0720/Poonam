#include<stdio.h>
void main() {

     int *ptr = (int*)100;
     
     ptr = ptr + 3;
     
     printf("%u\n",ptr);
}

/*

112

*/
