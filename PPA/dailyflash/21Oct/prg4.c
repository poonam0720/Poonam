#include<stdio.h>

void SumofRow(int (*ptr)[3], int *ptr1);

void main()  {

   int arr[2][3] = {1,2,3,4,5,6};
   int arr1[2];
   
   SumofRow(arr, arr1);
   
}

void SumofRow(int (*ptr)[3], int *ptr1)   {

     for(int i=0; i < 2; i++)  {
     
          for(int j = 0; j < 3; j++)  {
          
                 printf("%d ",*(*(ptr + i) + j));
          }
          
          printf("\n");
     }
     
     
     for(int i=0; i < 2; i++)  {
          
         // int sum = 0;
          *(ptr1 + i) = 0;
          for(int j = 0; j < 3; j++)  {
          
              //  sum = sum  + *(*(ptr + i) + j);
              *(ptr1 + i) = *(ptr1 + i)  + *(*(ptr + i) + j);
          }
     
          // printf("Sum of row %d = %d\n",i,sum)     ;
           printf("Sum of row %d = %d\n",i,*(ptr1 + i))     ;
     }
    
          
}

/*

1 2 3 
4 5 6 
Sum of row 0 = 6
Sum of row 1 = 15

*/
