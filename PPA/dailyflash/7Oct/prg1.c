#include<stdio.h>
int main() {

      int row,col;
      
      printf("Enter number of row and column=\n");
      scanf("%d %d",&row,&col);
      
      int marr[row][col];
      
      printf("Enter matrix elements=\n");
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                scanf("%d",&(marr[i][j]));
           }
      }
      
      printf("Enter matrix elements=\n");
      for(int i=0; i<row; i++){
      
           for(int j=0; j<col; j++){
           
                printf("%d",marr[i][j]);
           }
           printf("\n");
      }
      
      for(int i=0; i<row; i++){
      
          int sum = 0;
          for(int j=0; j<col; j++){
          
              sum = sum + marr[i][j];
          }
          
          printf("Addition of %d row is %d\n",i,sum);
          printf("\n");
      }
      
      return 0;
}
/*

#1

Enter number of row and column=
3
3
Enter matrix elements=
1
2
3
4
4
6
7
8
9
Enter matrix elements=
123
446
789
Addition of 0 row is 6

Addition of 1 row is 14

Addition of 2 row is 24


#2

Enter number of row and column=
3
3
Enter matrix elements=
1
2
3
4
5
6
7
8
9
Enter matrix elements=
123
456
789
Addition of 0 row is 6

Addition of 1 row is 15

Addition of 2 row is 24


*/

