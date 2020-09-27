#include<stdio.h>
int main(){

     int arr[] = {10,20,30,40,50};

     int *iptr = &(arr[1]);

     printf("%d\n",*iptr);   // 20

     int *aptr = ++iptr;   // iptr = iptr + 1

     printf("%p\n",aptr);  // address of pointer aptr

     printf("%d\n",*aptr);  //30

     printf("%d\n",*iptr);  //30

     return 0;


}
/*
20
0x7fffeb0b1638
30
30

*/
