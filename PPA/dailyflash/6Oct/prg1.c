#include<stdio.h>
int main() {

      int row,col,flag=0;
      
      printf("Enter number of rows and columns=\n");
      scanf("%d %d",&row,&col);
      
      int marr[row][col];
      printf("Enter matrix=\n");
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                scanf("%d",&marr[i][j]);
           }
           printf("\n");
      }
      
      printf("Matrix=\n");
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
               printf("%d\t",marr[i][j]);
           }
           
           printf("\n");
      }
      
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                if(i == j  && marr[i][j] != 1){
                
                       flag = -1;
                       break;
                }
                else if(i != j && marr[i][j] != 0){
                
                     flag = -1;
                     break;
                }
           }
      }
      
      if(flag == 0){
      
           printf("It is a Identify Matrix.\n");
      }
      else{
      
           printf("It is not a Identify Matrix.\n");
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

0
1
0

0
0
1

Matrix=
1	0	0	
0	1	0	
0	0	1	
It is a Identify Matrix.

*/
