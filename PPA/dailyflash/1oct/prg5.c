#include<stdio.h>
int main() {

       int size;
       printf("Enter array size=\n");
       scanf("%d",&size);
       
       int arr1[size], arr2[size], arr3[size];
       int *iptr1=arr1, *iptr2=arr2, *iptr3=arr3;
       
       printf("Enter array1=\n");
       for(int itr=0; itr<size; itr++){
       
           scanf("%d",&arr1[itr]);
       }
       
       printf("Enter array2=\n");
       for(int itr=0; itr<size; itr++){
       
           scanf("%d",&arr2[itr]);
       }
       
      //Addition 
       for(int itr=0; itr<size; itr++){
       
           *(iptr3+itr) = *(iptr1+itr) + *(iptr2+itr);
       }
       
       printf("Output=\n");
       for(int itr=0; itr<size; itr++) {
       
            printf("%d ",*(iptr3+itr));
       }
       
       printf("\n");
       
       
      return 0; 
}
/*
Enter array size=
5
Enter array1=
1
2
3
4
5
Enter array2=
5
6
7
8
9
Output=
6 8 10 12 14 


Enter array size=
5
Enter array1=
10
20
30
40
50
Enter array2=
50
60
70
80
90
Output=
60 80 100 120 140 


*/
