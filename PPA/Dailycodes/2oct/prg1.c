#include<stdio.h>
int main() {

      int arr1[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
      
      printf("%p\n",&(arr1[0][0])); //100
      
      printf("%p\n",arr1);  //100
      printf("%p\n",arr1[0]); //100
      printf("%d\n",(arr1[0][0]));  //1
      
      printf("%p\n",&(arr1[1][2])); //128
      
      printf("%p\n",arr1);  //100
      printf("%p\n",arr1[1]); //120
      printf("%d\n",(arr1[1][2]));  //8
      
      return 0;
}
/*
0x7ffc20b95440
0x7ffc20b95440
0x7ffc20b95440
1
0x7ffc20b9545c
0x7ffc20b95440
0x7ffc20b95454
8

*/
