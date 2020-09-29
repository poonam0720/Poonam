#include<stdio.h>
int main(){

     int arr1[] = {10,20,30,40,50};

     int arr2[] = {60,70,80};

     int *iptr1 = arr1;

     printf("%d\n",*iptr1); // 10

     iptr1 = iptr1 + 1;

     printf("%d\n",*iptr1);   //20
     
     

     return 0;
}

/*
10
20

*/
