#include<stdio.h>
int main() {

      int m,n,large,count = 0;
      
      printf("Enter number of rows and columns of matrix=\n");
      scanf("%d %d",&m,&n);
      
      int marr[m][n];
      
      printf("Enter matrix element=\n");
      
      for(int row=0; row<m; row++){
      
          for(int col=0; col<n; col++){
          
              scanf("%d",&(marr[row][col]));
          }
      }
      
      printf("Matrix element=\n");
      
      for(int row=0; row<m; row++){
      
          for(int col=0; col<n; col++){
          
              printf("%d\t",marr[row][col]);
          }
          printf("\n");
      }
      
      for(int row=0; row<m; row++){
      
          for(int col=0; col<n; col++){
          
              if(marr[row][col] < 0 ){
              
                  count++;
              }
          }
         
      }
      
      printf("Count=%d\n",count);
      return 0;
      
}


/*
Enter number of rows and columns of matrix=
3
3
Enter matrix element=
1
2
3
-1
-4
5
5
-4
0
Matrix element=
1	2	3	
-1	-4	5	
5	-4	0	
Count=3

*/
