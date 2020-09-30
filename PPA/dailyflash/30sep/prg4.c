#include<stdio.h>
int main(){

     int size;
     printf("Enter size of array=\n");
     scanf("%d",&size);
     
     float arr1[size], total = 1;
     float *iptr = &(arr1[0]);
     
     printf("Enter array elements=\n");
     for(int itr=0; itr<size; itr++){
     
          scanf("%f",&arr1[itr]);
          
          if(itr % 2 == 0){
          
              total = total * (arr1[itr]);
              arry = arr1[itr] + 1;
          }
     }
     
     printf("%.2f\n",total);
     
     return 0;
}
