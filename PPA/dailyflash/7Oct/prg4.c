#include<stdio.h>
int main() {

    int row,col;
      
      printf("Enter number of row and column=\n");
      scanf("%d %d",&row,&col);
      
      int arr1[row][col];
      int arr2[row][col];
      int arr3[row][col];
      
      
      
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
           
                arr3[i][j] = 0;
                for(int k=0; k<row; k++){
                
                     arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
                }
           }
           printf("\n");
                      
      }    
      
      printf("Output=\n");
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                printf("%d\t",arr3[i][j]);
                
           }
           
           printf("\n");
      }
     
     return 0;           
}
/*
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
1
2
3
4
5
6
7
8
9



Output=
30	36	42	
66	81	96	
102	126	150	

*/
