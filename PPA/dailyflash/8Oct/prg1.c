#include<stdio.h>
int main() {

      int row,col;
      
      printf("Enter number of rows and columns=\n");
      scanf("%d %d",&row,&col);
      
      int arr1[row][col];
      int trans[row][col];
      
      
      //taking array elements
      printf("Enter array elements=\n");
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                scanf("%d",&arr1[i][j]);
           }
      }
      
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                trans[j][i] = arr1[i][j];
           }
      }
      
      printf("Maxtrix=\n");
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                printf("%d  ",arr1[i][j]);
           }
           
           printf("\n");
      }
      
      printf("Transpose matrix=\n");
      
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                printf("%d  ",trans[i][j]);
           }
           
           printf("\n");
      }
      
      return 0;
}

/*
Enter number of rows and columns=
3
3
Enter array elements=
1
2
3
4
5
6
7
8
9
Maxtrix=
1  2  3  
4  5  6  
7  8  9  
Transpose matrix=
1  4  7  
2  5  8  
3  6  9  
*/
