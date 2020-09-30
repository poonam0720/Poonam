#include<stdio.h>
int main(){

     int arr1[] = {10,20,30,40,50};
     
     int arr2[] = {60,70,80,90,100};
     
    // int arr3[] = {110,120,130};
     
     printf("%p\n",arr1);   //100
     printf("%p\n",&arr1);  //100
     
     printf("\n");
     
     int *iptr1 = arr1 + 1;
     printf("%p\n",iptr1) ;// 104
     printf("%d\n",*iptr1);//20
     
     printf("\n");
     
     int *iptr2 = &arr1 + 1;
     printf("%p\n",iptr2); // 120
     printf("%d\n",*iptr2); // garbage value
     
     return 0;
}
/*
0x7fff35081620
0x7fff35081620

0x7fff35081624
20

0x7fff35081634
32602

*/
