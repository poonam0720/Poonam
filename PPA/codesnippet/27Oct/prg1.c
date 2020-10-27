#include<stdio.h>
void main() {

    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &a;
    
    printf("%d\n",**ptr2);
}

/*

Segmentation fault (core dumped)


*/
