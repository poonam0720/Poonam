#include<stdio.h>
int main() {

     int arr1[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
     
     for(int itr=0; itr<3; itr++){
     
          for(int itr1=0; itr1<5; itr1++){
          
               printf("%d\n",arr1[itr][itr1]);
          }
        
     }
     return 0;
}
/*
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15

*/
