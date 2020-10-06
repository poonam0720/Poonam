#include<stdio.h>
int main() {

     int m,n,sum=0;
     char ch;
     
     printf("Enter number of rows and columns=\n");
     scanf("%d %d",&m,&n);
       
     int marr[m][n];
     int trans[m][n];
     
     //taking matrix elements from user
     printf("Enter matrix element=\n");
     for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             scanf("%d",&(marr[row][col]));
         }
     }
     
     //display matrix
     printf("Matrix=\n");
     
     for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             printf("%d\t",marr[row][col]);
             if(col == n-1)
                printf("\n");
         }
         
     }
     
     //addition of main diagonal
     for(int itr=0; itr<m; itr++){
     
         sum = sum + marr[itr][itr];
     }
     
     //display sum of main diagonal
     printf("Sum of main diagonal of matrix is %d\n",sum);
     
   
     //check whether sum is even or not
     if(sum % 2 == 0){
     
        for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             trans[col][row] = marr[row][col];

         }
       } 
     }  
     /*  for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             trans[col][row] = marr[row][col];

         }
       } */
       
 
     
   // display transpose matrix
         printf("Transpose Matrix=\n");
     
     for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             printf("%d\t",trans[row][col]);
         }
         printf("\n");
     } 
     
    return 0;
  }
  
/*
Enter number of rows and columns=
3
3
Enter matrix element=
12
14
16
21
24
26
08
18
10
Matrix=
12	14	16	
21	24	26	
8	18	10	
Sum of main diagonal of matrix is 46
Transpose Matrix=
12	21	8	
14	24	18	
16	26	10
*/     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     

