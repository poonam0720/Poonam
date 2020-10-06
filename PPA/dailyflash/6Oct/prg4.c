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
     
    
     for(int i=0; i<row; i++){
     
          for(int j=0; j<col; j++){
          
               printf("%d\t",marr[i][j]);
          }
          printf("\n");
     } 
     
     printf("Sqaure of diagonal element=\n");
     
     for(int i=0; i<row; i++){
     
         for(int j=0; j<col; j++){
         
              if(i == j){
              
                   printf("%d\n",marr[i][j] * marr[i][j]);
              }
         }
     }
     
     return 0;
}
/*

#1

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
7
8
9
1	2	3	
4	5	6	
7	8	9	
Sqaure of diagonal element=
1
25
81


# 2

Enter number of rows and columns=
3
3
Enter matrix=
10
20
30
40      
50
60
70
80
90
10	20	30	
40	50	60	
70	80	90	
Sqaure of diagonal element=
100
2500
8100

*/
