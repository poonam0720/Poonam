#include<stdio.h>
int main() {

      int row,col;
     
     printf("Enter number of rows and columns=\n");
     scanf("%d %d",&row,&col);
     
     int marr[row][col];
     int marr1[row][col];
     
     printf("Enter matrix=\n");
     for(int i=0; i<row; i++){
     
          for(int j=0; j<col; j++){
          
               scanf("%d",&marr[i][j]);
          }
     }
     
    printf("Matrix 1=\n");
    
     for(int i=0; i<row; i++){
     
          for(int j=0; j<col; j++){
          
               printf("%d\t",marr[i][j]);
          }
          printf("\n");
     } 
     
     printf("Matrix 2=\n");
     
     for(int i=0; i<row; i++){
     
          for(int j=0; j<col; j++){
          
                if(marr[i][j] % 2 == 0){
                
                     marr1[i][j] = marr[i][j] * marr[i][j];
                     printf("%d\t",marr1[i][j]);
                }
                else{
                
                     marr1[i][j] = marr[i][j] * marr[i][j] * marr[i][j];
                     printf("%d\t",marr1[i][j]);
                }
          }
          printf("\n");
     }
     return 0;
}

/*
Enter number of rows and columns=
3
3
Enter matrix=
1
2
3
4
5
6
3
2
1
Matrix 1=
1	2	3	
4	5	6	
3	2	1	
Matrix 2=
1	4	27	
16	125	36	
27	4	1

*/
