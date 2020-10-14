#include<stdio.h>
void main() {

    int *ptr1 = (int*)100;
    int *ptr2 = (int*)200;
    
    printf("%d\n",ptr1 + ptr2);
}

/*

compile time error

*/
