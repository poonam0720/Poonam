#include<stdio.h>

void des(int arr[], int n)   {
 
     int temp;
     
     for(int i = 0; i < n; i++)  {
     
          for(int j = i + 1; j < n; ++j)  {
          
              if(arr[i] < arr[j]) {
              
                   temp = arr[i];
                   arr[i] = arr[j];
                   arr[j] = temp; 
              }
          }
     }
     
     printf("Descending order=\n");
     for(int i = 0; i < n; i++) {
      
         printf("%d ",arr[i]);
     }
     
     printf("\n");
}

void main() {

    int arr[] = {3,5,2,8,6};
    
    int n = sizeof(arr)/sizeof(arr[0]);
   
    des(arr,n);
    
    
}

/*
Descending order=
8 6 5 3 2 

*/
