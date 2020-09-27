#include<stdio.h>
int main(){

    int a = 10;
    int *iptr = &a;

    printf("%d\n",*iptr);
    
    iptr = iptr + 'A' * sizeof(int);

    printf("%p\n",iptr);

    return 0;
}

/*
 10
0x7ffe2c925b6c


   */
