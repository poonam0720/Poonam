#include<stdio.h>
int main(){

   int size;
   printf("Enter size of array=\n");
   scanf("%d",&size);
   
   int arr1[size];
   int *iptr = arr1;
   
   printf("Enter array elements=\n");
   for(int itr=0; itr<size; itr++){
   
        scanf("%d",&arr1[itr]);
   }
   
   printf("Output=\n");
   for(int itr=0; itr<size; itr++){
   
         if(arr1[itr] % 2 == 0){
         
             arr1[itr] = arr1[itr] + 10;
             printf("%d  ",arr1[itr]);
         }
         else{
         
             printf("%d  ",arr1[itr]);
         }
         
   }
   printf("\n");
   
   return 0;
}
/*
Enter size of array=
5
Enter array elements=
1
2
3
4
5
Output=
1  12  3  14  5 
*/
