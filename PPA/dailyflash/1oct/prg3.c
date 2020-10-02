#include<stdio.h>
int main() {

      int size,sum=0;
      printf("Enter size of array=\n");
      scanf("%d",&size);
      
      int arr1[size];
      
      int *iptr1 = arr1;
      
      printf("Enter array elements=\n");
      for(int itr=0; itr<size; itr++){
      
          scanf("%d",&arr1[itr]);
      }
      
      printf("Elements of array are=\n");
      for(int itr=0; itr<size; itr++){
      
         printf("%d ",*(iptr1 + itr));
         sum = sum + *(iptr1 + itr);
      }
      
      printf("\n");
      
      printf("SUM=%d\n",sum);
      
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
Elements of array are=
1 2 3 4 5 
SUM=15

*/
