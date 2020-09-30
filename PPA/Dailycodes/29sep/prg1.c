#include<stdio.h>
int main(){

     int arr1[] = {10,20,30,40,50};
     
     int arr2[] = {60,70,80,90,100};
     
     int arr3[] = {110,120,130};
     
     //array address
     
     printf("Arr1[0]=%p\n",arr1);//100
     printf("Arr1[4]=%p\n",&(arr1[4]));//116
     
     printf("\n");
     
     printf("Arr2[0]=%p\n",arr2);//120
     printf("arr2[4]=%p\n",&(arr2[4]));//136
     
     printf("\n");
     
     printf("Arr3[0]=%p\n",arr3);//94
     printf("arr3[2]=%p\n",&(arr3[4]));//102
     
     //gate address
     
     printf("%p\n",&arr1);//100
     printf("%p\n",&arr2);//120
     printf("%p\n",&arr3);//94
     
     
     return 0;
}
/*
Arr1[0]=0x7ffc14067840
Arr1[4]=0x7ffc14067850

Arr2[0]=0x7ffc14067860
arr2[4]=0x7ffc14067870

Arr3[0]=0x7ffc14067834
arr3[4]=0x7ffc14067844
0x7ffc14067840
0x7ffc14067860
0x7ffc14067834

*/
