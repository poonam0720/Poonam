#include<stdio.h>
int main() {

     int m,n,temp = 0;
     
     //taking number of rows and columns
     printf("Enter number of rows and columns=\n");
     scanf("%d %d",&m,&n);
     
     int marr[m][n];
     
     //input     
     printf("Enter matrix elements=\n");
     
     for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             scanf("%d",&marr[row][col]);
         }
     }
          
     //before swapping
     printf("Before swapping\n");
     for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             printf("%d\t",marr[row][col]);
         }
         printf("\n");
     }
     
     //after swapping
     
     for(int row=0; row<m; row++){
     
          temp = marr[row][0];
          marr[row][0] = marr[row][2];
          marr[row][2] = temp;
     }
     
      printf("After swapping\n");
   
     for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             printf("%d\t",marr[row][col]);
         }
         printf("\n");
     }
      
 
     return 0;    
}

/*
Enter number of rows and columns=
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
Before swapping
1	2	3	
4	5	6	
7	8	9	
After swapping
3	2	1	
6	5	4	
9	8	7
*/
