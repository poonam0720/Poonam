#include<stdio.h>
int main() {

     int row,col;
     
     printf("Enter number of rows and columns=\n");
     scanf("%d %d",&row,&col);
     
     int marr[row][col];
     
     printf("Enter matrix=\n");
     for(int i=0; i<row; i++){
     
         for(int j=0; j<col; j++){
         
             scanf("%d",&marr[i][j]);
         }
     }
     
     printf("Enter matrix=\n");
     for(int i=0; i<row; i++){
     
         for(int j=0; j<col; j++){
         
             printf("%d\t",marr[i][j]);
         }
         printf("\n");
     }
     
     int lower = 1;
     
     for(int i=0; i<row; i++){
     
         for(int j=0; j<col; j++){
         
              if(col>row && marr[i][j] != 0){
              
                   lower = 0;
              }
         }
     }
     
     printf("\n");
     
     if(lower == 1){
     
          printf("Matrix is lower triangular matrix.\n");
          
          for(int i=0; i<row; i++){
     
         for(int j=0; j<col; j++){
         
             printf("%d\t",marr[i][j]);
         }
         printf("\n");
     }
     
    }
     else{
     
          printf("Matrix is not a lower triangular matrix\n");
     }
     
  return 0;
  
}
 /*
Enter number of rows and columns=
3
3
Enter matrix=
1
0
0
4
5
0
7
8
9
Enter matrix=
1	0	0	
4	5	0	
7	8	9	

Matrix is lower triangular matrix.
1	0	0	
4	5	0	
7	8	9	

*/    
     








