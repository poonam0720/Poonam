#include<stdio.h>
void main() {

     int *i = 0*700;
     *i = 90;
     printf("*i is %d\n",*i);
}
/*
Segmentation fault (core dumped)

*/
