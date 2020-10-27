#include<stdio.h>
void main()  {

    int data_one = 1, data_two = 2;
    const int *dataptr = &data_one;
    
    printf("dataptr = %d\n",*dataptr);
    dataptr = &data_two;
    
    printf("dataptr = %d\n",*dataptr);
    *dataptr = 10;           //error
    
    printf("dataptr = %d\n",*dataptr);
    
}


