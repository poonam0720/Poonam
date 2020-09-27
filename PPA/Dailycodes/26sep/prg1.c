#include<stdio.h>
int main(){

     int arr[] = {10,20,30,40,50};

     int *iptr = &(arr[2]);

     iptr = iptr - 1;

     printf("%d\n",*iptr);  //20

     return 0;
}
/*
20

*/
