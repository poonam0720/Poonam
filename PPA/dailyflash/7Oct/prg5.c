#include<stdio.h>
int main() {

      int row,col,plane;
      
      printf("Enter number of rows and columns=\n");
      scanf("%d %d",&row,&col);
      
      printf("Enter number of plane=\n");
      scanf("%d",&plane);
      
      int arr1[plane][row][col];
      
      printf("Enter element=\n");
      
      for(int k=0; k<plane; k++){
      
           for(int i=0; i<row; i++){
      
                for(int j=0; j<col; j++){
           
                    scanf("%d",&(arr1[k][i][j]));
                }
           }
      }
      
      printf("Output=\n");
      
  
         for(int k=0; k<plane; k++) {
          
               printf("Plane %d=\n",k);
              for(int i=0; i<row; i++){
              
                for(int j=0; j<col; j++){
                
                    printf("%d\t",arr1[k][i][j]);
                }
                printf("\n");
              
           }
           
           printf("\n");
      }
      
}  

/*
Enter number of rows and columns=
3
3
Enter number of plane=
2
Enter element=
1
2
3
4
5
6
7
8
9
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
1	2	3	
4	5	6	
7	8	9	

1	2	3	
4	5	6	
7	8	9	

*/
