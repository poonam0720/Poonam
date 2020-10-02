#include<stdio.h>
int main() {

      int size, flag = 0;
      printf("Enter size of array=\n");
      scanf("%d",&size);
      
      int arr1[size], arr2[size];
      int *iptr1 = arr1, *iptr2 = arr2;
      
      printf("Enter array1 =\n");
      for(int itr=0; itr<size; itr++){
      
          scanf("%d",&arr1[itr]);
      }
      
      printf("Enter array2 =\n");
      for(int itr=0; itr<size; itr++){
      
          scanf("%d",&arr2[itr]);
      }
      
      for(int itr=0; itr<size; itr++) {
      
           for(int itr1=0; itr1<size; itr1++){
           
           
              if(arr1[itr] == arr2[itr1]){
              
                  flag =1;
              }
              else{
              
                  flag =0;
              }
           }
      }
 
 if(flag == 1){
 
    printf("Both array are equal\n");
 }
 
 return 0; 
}
