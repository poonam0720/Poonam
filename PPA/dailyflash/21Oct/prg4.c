#include<stdio.h>

void *SumofRow(int (*ptr)[3], int *ptr1);

void main()  {

   int num1,num2;
   
   printf("Enter number of rows and columns=\n");
   scanf("%d %d",&num1,&num2);

  // int arr[2][3] = {1,2,3,4,5,6};
  // int arr1[2];
  
    int arr[num1][num2];
    int arr1[num1];
    
    printf("Enter array elements=\n");
    
    for(int i=0; i < 2; i++)  {
     
          for(int j = 0; j < 3; j++)  {
          
                 scanf("%d",&arr[i][j]);
          }
          
          printf("\n");
     }
   
   SumofRow(arr, arr1);
   
   printf("Addition=\n");
   int *ptr2 = arr1;
   for(int i=0; i < 2; i++) {
    
        printf("%d ",*(ptr2 + i));
    }
    
    printf("\n");
   
}

void *SumofRow(int (*ptr)[3], int *ptr1)   {

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
          // printf("Addition of rows %d = %d\n",i,*(ptr + i));
     }
    
  /* for(int i=0; i < 2; i++) {
    
        printf("Addition of rows %d = %d ",i,*(ptr + i));
    }
    
    printf("\n");*/
   return ptr1;
          
}

/*

Enter number of rows and columns=
2
3
Enter array elements=
1
2
3

4
5
6

1 2 3 
4 5 6 
Addition=
6 15 


*/
