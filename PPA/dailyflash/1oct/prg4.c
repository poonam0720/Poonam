#include<stdio.h>
int main() {

     int size,sum_even=0,sum_odd;
     
     printf("Enter size of array=\n");
     scanf("%d",&size);
     
     int arr1[size];
     
     printf("Enter array elements=\n");
     for(int itr=0; itr<size; itr++){
     
         scanf("%d",&arr1[itr]);
     }
     
     printf("Output=\n");
     for(int itr=0; itr<size; itr++){
     
          if(arr1[itr] % 2 == 0){
          
              sum_even = sum_even + arr1[itr];
          }
          else{
          
              sum_odd = sum_odd + arr1[itr];
          }
     }
     
     printf("Sum of even numbers=%d\n",sum_even);
     
     printf("Sum of odd numbers=%d\n",sum_odd);
     
     return 0;
}
/*
Enter size of array=
10
Enter array elements=
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
Output=
Sum of even numbers=30
Sum of odd numbers=25


Enter size of array=
10
Enter array elements=
12
13
14
15
16
17
18
19
20
21
Output=
Sum of even numbers=80
Sum of odd numbers=85

*/
