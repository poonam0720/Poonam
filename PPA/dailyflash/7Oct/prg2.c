#include<stdio.h>
int main() {

    int row,col;
      
      printf("Enter number of row and column=\n");
      scanf("%d %d",&row,&col);
      
      int arr1[row][col];
      int arr2[row][col];
      int arr3[row][col];
      
      int *ptr1 = arr1;
      int *ptr2 = arr2;
      int *ptr3 = arr3;
      
      printf("Enter matrix 1 elements=\n");
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                scanf("%d",&(arr1[i][j]));
           }
      }
      
      printf("\n");
      
      printf("Enter matrix 2 elements=\n");
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                scanf("%d",&(arr2[i][j]));
           }
      }
      
      //performing additon of two matrices
    
    
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                *(*(arr3 + i) + j) = *(*(arr1 + i) + j) + *(*(arr2 + i) + j);
             
           }
                      
      }    
      
      printf("Output=\n");
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                printf("%d\t",*(*(arr3 + i) + j));
                
           }
           
           printf("\n");
      }
     
     return 0;           
}




/*
#1

Enter number of row and column=
2
2
Enter matrix 1 elements=
1
2
3
4

Enter matrix 2 elements=
5
6
7
8
Output=
6	8	
10	12	



#2
Enter number of row and column=
3
3
Enter matrix 1 elements=
1
2
3
4
5
6
7
8
9

Enter matrix 2 elements=
10
20
30
40
50
60
70
80
90
Output=
11	22	33	
44	55	66	
77	88	99

*/




























