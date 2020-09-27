#include<stdio.h>
int main(){

    int arr[] = {10,20,30,40,50};

    int *iptr1 = &arr[1];
    
    int *iptr2 = &arr[4];

    int *arrptr = iptr1 + iptr2;

    printf("%d\n",*arrptr);  // error

    return 0;
}

 
/*
prg4.c: In function ‘main’:
prg4.c:10:25: error: invalid operands to binary + (have ‘int *’ and ‘int *’)
   10 |     int *arrptr = iptr1 + iptr2;
      |                         ^

*/
