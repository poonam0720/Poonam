#include<stdio.h>
int main(){

     int num;
     float avg,total = 0,count = 0;
     
     printf("Enter size of array=\n");
     scanf("%d",&num);
     
     while(num<0){
     
     printf("Enter integer array size=\n");
     scanf("%d",&num);
     }
     
     int arr1[num];
     int *iptr1 = arr1;
      printf("Enter array elements=\n");
      for(int itr=0;itr<num;itr++){
      
          scanf("%d",&arr1[itr]);
      }
      
      for(int itr=0; itr<num; itr++){
        
           if(arr1[itr] % 2 != 0){
          total = total + *(iptr1 + itr);
          ++iptr1;
          }
      }
      
      avg = total/count;
      
      printf("%.2f",avg);
      
      return 0;
}

