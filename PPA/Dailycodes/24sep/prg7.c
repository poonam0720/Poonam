#include<stdio.h>
int main(){

    int arr[] = {10,20,30,40,50};

    int *iptr = &(arr[1]);

    printf("%d\n",*iptr);   //10

    iptr  = iptr - 1;  

    printf("%d\n",*iptr);   //10

    return 0;
}
/*
20
10

*/
