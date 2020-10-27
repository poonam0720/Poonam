#include<stdio.h>
void main() {

    int data1 = 10;
    int *dataptr1 = &data1;
    
    int data2 = 20, *dataptr2;
    dataptr2 = &data2;
    
    printf("the data in dataptr1 is %d\n",*dataptr1);//10
    
    printf("the data in dataptr2 is %d\n",*dataptr2);//20
}

/*
the data in dataptr1 is 10
the data in dataptr2 is 20

*/
