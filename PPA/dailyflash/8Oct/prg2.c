#include<stdio.h>
int main() {

      int size;
      
      printf("Enter size of array=\n");
      scanf("%d",&size);
      
      int arr1[size];
      int* parr[size];
      
      printf("Enter matrix element=\n");
      
      for(int i=0; i<size; i++){
      
           scanf("%d",&(arr1[i]));
      }
      
      for(int i=0; i<size; i++){
      
           parr[i] = &arr1[i];
      }
      
      
      printf("Array=\n");
      for(int i=0; i<size; i++){
      
           printf("%d ",*(*(parr + i)));
      }
      
      printf("\n");
      
      return 0;
      
}

/*
Enter size of array=
5
Enter matrix element=
1
2
3
4
5
Array=
1 2 3 4 5 

*/
