#include<stdio.h>
int main(){

    int arr[] = {10,20,30,40,50};

    int *iptr = &(arr[1]);

    printf("%d\n",*iptr);  // 20

    int *aptr = iptr++; // iptr = iptr +1

    printf("%p\n",aptr);  // address of 1st index

    printf("%d\n",*aptr);  // 20

    printf("%d\n",*iptr);  //30

    return 0;
}
/*
20
0x7ffc912070a4
20
30

*/
