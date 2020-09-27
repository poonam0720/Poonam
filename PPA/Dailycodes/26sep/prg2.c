#include<stdio.h>
int main(){

     int arr[] = {10,20,30,40,50};

     int *iptr = &(arr[3]);

     printf("%d\n",*iptr);  // 40

     // preincrement
     int *aptr = --iptr;

     printf("%d %d\n",*iptr,*aptr);  // 30  30

     //postdecrement

     aptr = iptr--;

     printf("%d %d\n",*iptr,*aptr);  // 20  30

     return 0;
}
/*
40
30 30
20 30

*/
