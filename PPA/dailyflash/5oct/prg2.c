#include<stdio.h>
int main() {

      int m,n,large;
      
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
      
      large = marr[0][0];
      for(int row=0; row<m; row++){
      
          for(int col=0; col<n; col++){
          
              if(large < marr[row][col]){
              
                   large = marr[row][col];
              }
                           
          }
      }
      
      printf("Biggest number in array=%d\n",large);
      
      return 0;      
      
}

/*
Enter number of rows and columns of matrix=
4
4
Enter matrix element=
10
11
12
13
14
36
16
17
18
19
20
21
22
23
24
25
Matrix element=
10	11	12	13	
14	36	16	17	
18	19	20	21	
22	23	24	25	
Biggest number in array=36

*/
